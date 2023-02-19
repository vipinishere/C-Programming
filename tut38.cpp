// single inheritance 
#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 20;
    data2 = 30;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3, data4;

public:
    void multiplication();
    void addition();
    void displaydata();
};

void derived ::multiplication()
{
    data3 = data2 * getdata1();
}

void derived ::addition()
{
    data4 = data2 + getdata1();
}

void derived ::displaydata()
{
    cout << "the value in data1 is " << getdata1() << endl;
    cout << "the value in data2 is " << data2 << endl;
    cout << "the value in data2 is " << getdata2() << endl;
    cout << "the value in data3 is " << data3 << endl;
    cout << "the value in data4 is " << data4 << endl;
}

int main()
{
    derived dr;
    dr.setdata();
    dr.multiplication();
    dr.addition();
    dr.displaydata();

    return 0;
}