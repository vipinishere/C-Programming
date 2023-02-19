#include <cmath>
#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // size of array
    int n;
    cout << "n:";
    cin >> n;
    // get array from user
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selection sorting code
    for (int i = 0; i < n - 1; i++)
    {
        // comparing
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // display array after sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}