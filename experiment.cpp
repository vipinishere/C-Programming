#include<iostream>
#include<fstream>
#include<conio.h>
#include<cmath>
using namespace std;

int selectionSort(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = 0;
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


int main(){

    int n;
    // n for array size 
    cin >>n;


    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }

    selectionSort(arr,n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

    
    return 0;
}