#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n : " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        // cout<<"i "<<i<<endl;
        int current = arr[i];
        int j = i - 1;
        // cout<<"arr[i] "<<arr[i]<<endl;
        // cout<<"j "<<j<<endl;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            // cout <<"value in arr[j+1] "<<arr[j + 1]<<endl;
            // cout <<"value in arr[j] "<< arr[j]<<endl;
            j--;
            // cout<<"j "<<j<<endl;
        }
        arr[j + 1] = current;
        // cout << arr[j + 1]<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}