
#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;
double RusMult(int a, int b, int c, int d, int A, int b1)
{
    double  RusMult1;
    RusMult1 = (2*a)*(b/2);
    int f = a;
       do{ if(b%2==0)
           {
         d = a << 1;
         c = b >> 1;
         a = d;
         b = c;

     cout << "a << 1: " << a << endl<<  "b >> 1: " << b << endl;
     f = a;
        }

         else if( b%2 != 0 )
       {
    int b1 = b-1;

    d = a << 1;
    c = b1 >> 1;
    A = d;
    b1 = c;
   // if (b1/2==0)
   //   RusMult1 = f + (A*2)/2;
   // else
        RusMult1 = f + (A*2)*((double) b1/2);

     cout << "a << 1: " << A << endl<<  "b1 >> 1: " << b1 << endl;
    b = b1;
    a = A;
    f+=a;

cout << "c: " << c << endl;
       }
       }while(b != 1);

        return RusMult1;

       }

int main()
{
bitset<8> number1;
bitset<8> number2;
int a;
int b;
int b1 = b-1;

cout << "a: ";
cin >> a;
cout << "b: ";
cin >> b;
int d;
int c;
int A;
    number1 = a;
    number2 = b;

    cout << "Bin a: " << number1 << endl;
    cout << "Bin b: " << number2 << endl;
///////////////////////////

/*bitset<8> number11;
number11 = d;
cout << "Bin d: " << number11 << endl;

///////////////////////////////

/*if (b%2 == 0){
c = b >> 1;

d = a << 1;
a=d;
}*/
 /*else if (b%2 != 0)

    d = a << 1;
    c = b1 >> 1;
       A = d;
       b = c;*/

/*bitset<8> number12;
number12 = c;
cout << "Bin c: " << number12 << endl;*/

double t = RusMult(a, b, c, d, A, b1);
cout <<endl<<"So the result is: "<< t<<endl;

return 0;
}
