#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    float a, b, result;
    char op;
    cout << "enter the 1st number" << endl;
    cin >> a;
    cout << "enter oprater (+,-,*,/)" << endl;
    cin >> op;
    cout << "enter the 2nd number" << endl;
    cin >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "i am still learning" << endl;
        break;
    }
}