// Copy Constructor;

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() { a = 0; }
    number(int num)
    {
        a = num;
    }

    number(number &obj)
    {
        cout << "copy constructor invoked " << endl;
        // obj.a = 0;
        a = obj.a;

    }
    void display(void)
    {
        cout << "the number in a " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // copy constructor invoked
    z1.display();

    cout << endl;
    z2 = z; // copy constructor not invoked
    z2.display();
    cout << endl;

    number z3 = z; // copy constructor will be invoked
    z3.display();

    z.display();

    return 0;
}