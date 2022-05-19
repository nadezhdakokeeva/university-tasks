#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
    {
        srand(time(NULL));
int l,n;
    cout<<"Enter the number of strings and columns: "<<endl;
    cin>>l;

    int A[l][l];

     int h = l/2;

    int P1[h][h];
    int P2[h][h];
    int P3[h][h];
    int P4[h][h];
    int P5[h][h];
    int P6[h][h];
    int P7[h][h];

    int A11[h][h];
    int A12[h][h];
    int A21[h][h];
    int A22[h][h];

    int C[l][l];
    int C11[l][l];
    int C12[l][l];
    int C21[l][l];
    int C22[l][l];

    int B1[l][l];

    int i,j;

     for (i=0;i<l;i++)
    {
        for (j=0;j<l;j++)
        {
            C[i][j] = 0;
        }
    }

    cout << "A: "<<endl;
    for( i=0;i<l;i++)
    {

    for(j=0;j<l;j++)
    {
        cout << "\t";
        A[i][j]= rand()%9;
        cout << A[i][j];
    }
        cout << "\t";
        cout << endl;
    }
        cout<< endl;

     for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            { cout << "\t";
                A11[i][j] = A[i][j];
                cout << A11[i][j];
            }cout << "\t"; cout << endl;
        }cout<< endl;

     for (i=0;i<h;i++)
        {
            for(j=h;j<l;j++)
            {cout << "\t";
                A12[i][j-h] = A[i][j];
                cout << A12[i][j-h];
            }cout << "\t"; cout << endl;
        }cout<< endl;

     for (i=h;i<l;i++)
        {
            for(j=0;j<h;j++)
            {cout << "\t";
                A21[i-h][j] = A[i][j];
                cout<<A21[i-h][j];
            }cout << "\t"; cout << endl;
        }cout<< endl;

     for (i=h;i<l;i++)
        {
            for(j=h;j<l;j++)
            {cout << "\t";
                A22[i-h][j-h] = A[i][j];
                cout<<A22[i-h][j-h];
            }cout << "\t"; cout << endl;
        }cout<< endl;

    for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
               C11[i][j] = C[i][j];
            }
        }

     for (i=0;i<h;i++)
        {
            for(j=h;j<l;j++)
            {
                C12[i][j-h] = C[i][j];
            }
        }

     for (i=h;i<l;i++)
        {
            for(j=0;j<h;j++)
            {
                C21[i-h][j] = C[i][j];
            }
        }

     for (i=h;i<l;i++)
        {
            for(j=h;j<l;j++)
            {
                C22[i-h][j-h] = C[i][j];
            }
        }
        int iter=0;
/////////////////////P1//////////////////////

int inP1[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP1[i][j] = A11[i][j] + A22[i][j];
            }
        }
 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P1[i][j]=0;
    	for(int k=0;k<h;k++)
		P1[i][j]+=inP1[i][k]*inP1[k][j];
		iter++;
    }
    }

/////////////////////P2//////////////////////

int inP2[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP2[i][j] = A21[i][j] + A22[i][j];
            }
        }

 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P2[i][j]=0;
    	for(int k=0;k<h;k++)
		P2[i][j]+=inP2[i][k]*A11[k][j];
		iter++;
    }
    }

/////////////////////P3//////////////////////

int inP3[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP3[i][j] = A12[i][j] - A22[i][j];
            }
        }

 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P3[i][j]=0;
    	for(int k=0;k<h;k++)
		P3[i][j]+=A11[i][k]*inP3[k][j];
		iter++;
    }
    }

/////////////////////P4//////////////////////

int inP4[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP4[i][j] = A21[i][j] - A11[i][j];
            }
        }

 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P4[i][j]=0;
    	for(int k=0;k<h;k++)
		P4[i][j]+=A22[i][k]*inP4[k][j];
		iter++;
    }
    }

/////////////////////P5//////////////////////

int inP5[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP5[i][j] = A11[i][j] + A12[i][j];
            }
        }

 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P5[i][j]=0;
    	for(int k=0;k<h;k++)
		P5[i][j]+=inP5[i][k]*A22[k][j];
		iter++;
    }
    }

/////////////////////P6//////////////////////

int inP61[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP61[i][j] = A21[i][j] - A11[i][j];
            }
        }

int inP62[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP62[i][j] = A11[i][j] + A12[i][j];
            }
        }

 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P6[i][j]=0;
    	for(int k=0;k<h;k++)
		P6[i][j]+=inP61[i][k]*inP62[k][j];
		iter++;
    }
    }
/////////////////////P7//////////////////////

int inP71[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP71[i][j] = A12[i][j] - A22[i][j];
            }
        }

int inP72[h][h];

  for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                inP72[i][j] = A21[i][j] + A22[i][j];
            }
        }

 for(i=0;i<h;i++)
    {
    for(j=0;j<h;j++)
    {
    	P7[i][j]=0;
    	for(int k=0;k<h;k++)
		P7[i][j]+=inP71[i][k]*inP72[k][j];
		iter++;
    }
    }

      for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                C11[i][j] = P1[i][j] + P4[i][j] - P5[i][j] + P7[i][j];
            }
        }

      for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                C12[i][j] = P3[i][j] + P5[i][j] ;
            }
        }

      for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                C21[i][j] = P2[i][j] + P4[i][j] ;
            }
        }

      for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                C22[i][j] = P1[i][j] - P2[i][j] + P3[i][j] + P6[i][j] ;
            }
        }

for (i=0;i<h;i++)
        {
            for(j=0;j<h;j++)
            {
                C[i][j] = C11[i][j];
            }
        }
        for (i=0;i<h;i++)
        {
            for(j=h;j<l;j++)
            {
                C[i][j] = C12[i][j-h];
            }
        }
        for (i=h;i<l;i++)
        {
            for(j=0;j<h;j++)
            {
                C[i][j] = C21[i-h][j];
            }
        }
        for (i=h;i<l;i++)
        {
            for(j=h;j<l;j++)
            {
                C[i][j] = C22[i-h][j-h];
            }
        }

        for (i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {cout << "\t";
                cout<< C[i][j];
            }cout << "\t"; cout << endl;
        }cout << endl;
        cout<<"Iterations using Strassen: "<<iter<<endl;
        cout << endl;
        cout<< "////////////////////////////////////"<<endl;
////////////////////////////////////////////////
  return 0;}

 /*cout<<"B=A^2: "<<endl;
		int itercom=0;
    for(i=0;i<l;i++)
    {
    for(j=0;j<l;j++)
    {
        cout << "\t";
    	B1[i][j]=0;
    	for(int k=0;k<l;k++)
		B1[i][j]+=A[i][k]*A[k][j];
		itercom++;
		cout<< B1[i][j];
    }
		cout<<endl;
    } cout<<endl;
    cout<<"Iterations using usual multiplication: "<<itercom*2<<endl;
          return 0;
    }*/
