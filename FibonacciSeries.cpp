#include<iostream>
#include<conio.h>
using namespace std;

int fibo(int * x);
int main()
{
    int n;
    cout<<"enter the value of n = "<<endl;
    cin>>n;
    fibo(&n);
    return 0;
}

int fibo(int * x){
    int f0 = 0;
    int f1 = 1;
    int f2;
    for (int i = 0; i < *x; i++)
    {
        if (i==0)
        {
            cout<<f0<<endl;
            i++;
        }
        if (i==1)
        {
            cout<<f1<<endl;
            i++;
        }
        f2 = f1 + f0;
        f0 = f1;
        f1 = f2;
        cout<<f2<<endl;
    }
    return 0;
}