#include <iostream>
#include <random>

using namespace std;

int main(){

    long N = 100000000;
    long inside = 0;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0,1);

    for(long i=0;i<N;i++){

        double x = dis(gen);
        double y = dis(gen);

        if(x*x + y*y <= 1)
            inside++;
    }

    double pi = 4.0*inside/N;

    cout<<"Estimacion de pi: "<<pi<<endl;

}