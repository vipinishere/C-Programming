#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    cout<<"n: ";
    cin>> n;

    // getinput for array
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // section of bubble sorting 
    int pass = 1;
    while (pass<n)
    {
        for (int i = 0; i < n-pass; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        pass++;
    }

    // code for print array 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}