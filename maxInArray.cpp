#include<iostream>
#include<climits>
#include<conio.h>
using namespace std;

int main(){
    int n;
    int maxNo=INT_MIN;
    int minNo=INT_MAX;


    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo, arr[i]);
        // if (i==0)
        // {
        //     max = arr[i];
        //     min = arr[i];
        // }
        // else if (arr[i]>max)
        // {
        //     max = arr[i];
        // }

        // else if (arr[i]<min)
        // {
        //     min = arr[i];
        // }
        
    }
    cout<<"max value is "<<maxNo<<endl;
    cout<<"min value is "<<minNo<<endl;

    return 0;

}
