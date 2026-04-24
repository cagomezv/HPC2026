#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <omp.h>

using namespace std;

const double G = 1.0;

struct Star{
    double x,y;
    double vx,vy;
    double m;
};

int main(){

    int N = 2000;        // numero de estrellas
    int steps = 2000;
    double dt = 0.01;

    vector<Star> s(N);

    // -------------------------
    // Inicialización: disco
    // -------------------------

    for(int i=0;i<N;i++){

        double r = ((double)rand()/RAND_MAX)*10.0;
        double theta = ((double)rand()/RAND_MAX)*2*M_PI;

        s[i].x = r*cos(theta);
        s[i].y = r*sin(theta);

        // velocidad tangencial
        double v = sqrt(G*100/(r+0.1));

        s[i].vx = -v*sin(theta);
        s[i].vy =  v*cos(theta);

        s[i].m = 1.0;
    }

    // archivo para visualizar
    ofstream file("galaxy.dat");

    for(int step=0; step<steps; step++){

        #pragma omp parallel for
        for(int i=0;i<N;i++){

            double fx=0;
            double fy=0;

            for(int j=0;j<N;j++){

                if(i==j) continue;

                double dx = s[j].x - s[i].x;
                double dy = s[j].y - s[i].y;

                double r = sqrt(dx*dx + dy*dy) + 0.01;

                double F = G*s[i].m*s[j].m/(r*r);

                fx += F*dx/r;
                fy += F*dy/r;
            }

            s[i].vx += fx*dt;
            s[i].vy += fy*dt;
        }

        // actualizar posiciones

        #pragma omp parallel for
        for(int i=0;i<N;i++){

            s[i].x += s[i].vx*dt;
            s[i].y += s[i].vy*dt;
        }

        // guardar para visualizar

        for(int i=0;i<N;i++)
            file<<s[i].x<<" "<<s[i].y<<" ";

        file<<"\n";
    }

    file.close();

    cout<<"Simulacion completada"<<endl;
}