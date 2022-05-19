#include<iostream>
#include<cmath>
#include <ctime>
#include<cstdlib>
#include <cstdio>

using namespace std;
int main()
{

    int N, i;
    double* x = new double[N];
    double* y = new double[N];


    cout << "N: " << endl;
    cin >> N;

 int Ncirc = 0 ;
srand (time(NULL));
    for (i = 1; i < N; i++)
    {

         x[i] = (double)(rand()% 2000)/1000;
         y[i] = (double)(rand()% 2000)/1000;
cout << i << endl;
    cout << "x: " << x[i] << endl << "y: " << y[i] << endl;

 if ((y[i]-1)*(y[i]-1) + (x[i]-1)*(x[i]-1) <= 1)
        {
        Ncirc++;
        }

    }
    double N1 = Ncirc;
    double N2 = N;
 cout << "The numbers in the circle: " << N1 <<  endl;
double Pi;
    Pi = (N1/N2)*4.0;

 cout << "The number Pi: " << Pi;

          return 0;
}
