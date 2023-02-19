#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, sum = 0, lastdigit, originaln;
    cout << "enter a value =" << endl;
    cin >> n;
    originaln = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << originaln << " = " << sum << " is armstrong" << endl;
    }
    else
        cout << originaln << " = " << sum << " is not armstrong" << endl;
    return 0;
}