#include<iostream>
using namespace std;

int main(){
    // int row,cols;
    int n;
    cin>>n;
    // cout<<"enter the value for rows : "<<endl;
    // cin>>row;
    // cout<<"enter the value for cols : "<<endl;
    // cin>>cols;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==1||i==n||j==1||j==n)
            {
                cout<<" * ";
            
        }
            else {
                cout<<"   ";
            }
        
    }
    cout<<endl;
    }
    return 0;
}