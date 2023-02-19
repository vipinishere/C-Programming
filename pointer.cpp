#include <iostream>
using namespace std;

int main()
{
    int x; // x ko insilize kr diya
    x = 50;
    int *b; // variable store address in memory of a variable
    b = &x; // & --->indicate the address of x
    cout << "the value of x = " << x << endl;
    cout << "the address of x = " << b << endl;
    cout << "the address of b = " << &b << endl;
    cout << endl;
    cout << "the value in b " << b << endl;
    cout << "the value in address " << b << " in the memory : " << *b << endl;
    cout << endl;
    cout << endl;

    int **c;
    c = &b;
    cout << "value in c " << &b << endl;  // &b is repesent a address of b
    cout << "value in c " << c << endl;
    cout << "value in b " << *c << endl; // *c represent value in b
    cout << "value in address which are stored in b " << **c << endl; //**c , c me store value ki value or value wo x ka address hai uski value ko point krta hain.
    cout << "address of c " << &c << endl;
    return 0;
}