#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i, j, k;
    int m1[2][2], m2[2][2], mult[2][2];
    cout << "Enter the value of matrix A :--" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter the value of matrix A is :--" << endl;
    for (i = 0; i < 2; i++)
    {
        cout<<"\t";
        for (j = 0; j < 2; j++)
        {
            cout<<m1[i][j];

        }
    }
    cout << "Enter the value of matrix B :--" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> m2[i][j];
        }
    }


    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; i++)
        {
            mult[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                mult[i][j] = mult[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "your are enter the values of matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        cout << "\t" << endl;
        for (j = 0; j <2 ; j++)
        {
            
            for (k = 0; k < 2; k++)
            {
                cout << mult[i][j] << endl;
            }
        }
    }
}