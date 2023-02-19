//this is 2nd program//
#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x,y;
    cin>>x>>y;
    cout<<"you entered:-\nx = "<<x<<"\ny = "<<y<<endl;
    if (x==y)
    {
        cout<<"x and y is equal number"<<endl;
    }
    else if (x>y)
    {
        cout<<"x is greater then y"<<endl;
    }
    else
    {
        cout<<"y is graater than x"<<endl;
    }
    return 0;
}