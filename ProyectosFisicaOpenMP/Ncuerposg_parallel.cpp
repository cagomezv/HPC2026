#include <iostream>
#include <vector>
#include <cmath>
#include <omp.h>

using namespace std;

const double G = 1.0;

struct Particle{
    double x,y;
    double vx,vy;
    double m;
};

int main(){

    int N = 1000;
    double dt = 0.01;

    vector<Particle> p(N);

    for(int i=0;i<N;i++){
        p[i].x = rand()%100 / 100.0;
        p[i].y = rand()%100 / 100.0;
        p[i].vx = 0;
        p[i].vy = 0;
        p[i].m = 1;
    }

    for(int step=0; step<1000; step++){

        #pragma omp parallel for
        for(int i=0;i<N;i++){

            double fx=0;
            double fy=0;

            for(int j=0;j<N;j++){

                if(i==j) continue;

                double dx = p[j].x - p[i].x;
                double dy = p[j].y - p[i].y;

                double r = sqrt(dx*dx + dy*dy) + 1e-5;

                double F = G*p[i].m*p[j].m/(r*r);

                fx += F*dx/r;
                fy += F*dy/r;
            }

            p[i].vx += fx*dt;
            p[i].vy += fy*dt;
        }

        #pragma omp parallel for
        for(int i=0;i<N;i++){

            p[i].x += p[i].vx*dt;
            p[i].y += p[i].vy*dt;
        }
    }

    cout<<"Simulacion terminada"<<endl;

}