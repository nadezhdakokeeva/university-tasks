#include <iostream>
#include <cstdlib>
#include <conio.h>

 using namespace std;
int n;

void Qsort(int arr[], int L, int R){
    int newL=L, newR=R;
    int center = arr[(L + R) / 2];
    int h;
    while(newL<=newR){
        while (arr[newL] < center)
        newL++;
        while (arr[newR] > center)
        newR--;
        if (newL<=newR) {
        h = arr[newL];
            arr[newL] = arr[newR];
            arr[newR] = h;
            newL++;
            newR--;}
    };
      if (L < newR)
    Qsort(arr, L, newR);
    if (newL < R)
    Qsort(arr, newL, R);

}
 int main() {

   int j,m,n,min,t, d, k;
   int *A,*B;
   
   cout<<"n= ";
   cin >>n;
   cout<<"m= ";
   cin >>m;
 
 if (m>=n) { cout<<"Error"<<endl;}
 else if(n>m){
 
   cout<<"A= ";
  A= new int [n];
  for(int i=0;i<n;i++){
  	 A[i]= rand()%10+1;
  	 cout<<A[i]<<" ";} 
	   cout<<endl; 
	   
  cout<<"B= ";
  	B= new int [m];
  for(j=0;j<m;j++){
  	 B[j]= rand()%21-10;
  	 cout<<B[j]<<" ";}
  	cout<<endl;  
	  
   int* C = new int[n];

     for (int i = 0; i < n; i++){
          C[i]=0;
		    k =0;
        min = abs(A[i]-B[0]);
        for ( j = 0; j < m; j++)

        if(abs(A[i]-B[j]) < min) {min = abs(A[i]-B[j]);
        k= j;}
        C[i]=k+1;
       }

 Qsort(A, 0, n-1);
            cout << "As: ";
            for (int i = 0; i < n; ++i) {
            cout << A[i] << " ";}
            cout << endl;
            
Qsort(B, 0, m-1);
            cout << "Bs: ";
            for (int j = 0; j < m; ++j) {
            cout << B[j] << " ";}
            cout << endl;


       cout << "\nC: ";
   for (int i = 0; i < n; ++i) {
            cout << C[i] << " ";}
        cout << endl;
}
    delete[] A,B;
}
