#include <iostream>
#include <vector>

using namespace std;

int main(){

    int Nx = 1000;
    int Nt = 5000;

    double alpha = 0.01;
    double dx = 1.0/Nx;
    double dt = 0.4*dx*dx/alpha;

    vector<double> u(Nx,0.0);
    vector<double> u_new(Nx,0.0);

    // condición inicial
    u[Nx/2] = 100;

    for(int t=0; t<Nt; t++){

        for(int i=1; i<Nx-1; i++){

            u_new[i] = u[i] + alpha*dt/(dx*dx)*
                       (u[i+1] - 2*u[i] + u[i-1]);
        }

        u = u_new;
    }

    cout<<"Temperatura final en el centro: "<<u[Nx/2]<<endl;

}