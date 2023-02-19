// multiple inheritance

#include <iostream>
using namespace std;

class base1
{
protected:
    int b1 = 10;

public:
    int showb1()
    {
        cout << b1 << endl;
        return 0;
    }
};

class base2
{
protected:
    int b2 = 20;

public:
};

class derived : public base1, public base2
{
    int d;

public:
    void getData()
    {
        d = b1 + b2;
        cout << "output is " << d << endl;
    }
};

int main()
{
    derived d;
    d.getData();

    base1 b;
    b.showb1();
}