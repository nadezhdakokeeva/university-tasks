#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    //I.���������� ����������
    int maxAB;
    cout<<"������� ����� �������? ";
    cin >> maxAB;

    int* xn = new int[maxAB];
    int m;

    if(maxAB > 7)
    {
        cout<<"Enter m(for 2^m): ";
        cin>>m;

        int C = 2^m;
        cout << "����� �" << 1 << " = " << 0 << endl;
        for(int i=0; i<=maxAB-1; i++)
        {
            if(i<=7)
                xn[i]=(rand() % 100)+1;
            else
            xn[i] = (xn[i-3] + xn[i-7]) % C;

            cout<<"����� �"<<i+1<<" = "<<xn[i]<<endl;
        }
    }
    //II. ������
    int T=2^7-1;
    return 0;
	system("pause");
}
