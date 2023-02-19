#include<iostream>
#include<conio.h>
using namespace std;

int swap(int,int);
int main()
{
    int a,b;
    cout<<"enter the value of a and b:\n";
    cin>>a>>b;
   // cout<<"the size of a and b = "<<sizeof(a)<<"\t"<<sizeof(b)<<"\n";
    swap(a,b);
    return 0;
}

int swap(int x, int y)
{
    int temp=0;
    cout<<"value of x = "<<x<<"\nvalue of y = "<<y;
    temp=x;
    x=y;
    y=temp;
    cout<<"\nnew value of x = "<<x<<"\nnew value of y = "<<y;
}