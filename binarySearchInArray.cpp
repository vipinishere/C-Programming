#include<iostream>
#include<fstream>
#include<conio.h>
#include<cmath>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int e = n,s=0;
    int mid;
    while (s<=0)
    {
        mid = (s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e = mid -1;
        }

        else{
            s = mid + 1;
        }
        
        
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;
    
    return 0;
}