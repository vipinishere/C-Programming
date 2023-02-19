#include <conio.h>
#include <iostream>
using namespace std;

int swap(int, int);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a, b;
    cout << "enter the value of A :-" << endl;
    cin >> a;
    cout << "enter the value of B :-" << endl;
    cin >> b;
    swap(a, b);
    return 0;
}

int swap(int x, int y)
{
    int z = 0;
    cout << "\nBefore swapping";
    cout << "\nx = " << x << "\ny = " << y << endl;
    z = x;
    x = y;
    y = z;
    cout << endl;
    cout << "After swapping" << endl;
    cout << "new value of x = " << x << "\nnew value of y = " << y << endl;
}
