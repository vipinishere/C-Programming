#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    int max, min;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    cout << "max = " << max << "\nmin = " << min << endl;
    return 0;
}