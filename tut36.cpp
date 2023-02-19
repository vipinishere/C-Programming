#include<iostream>
using namespace std;

class Employee
{
    int Id;
    int salary = 2400;
    public:
    void setdata(int id)
    {
        Id = id;
    }
    void getdata()
    {
        cout<<"your Id is "<<Id<<" and your salary is "<<salary<<endl;
    }
};

class programmer : public Employee
{
    public:
    void setdata(int);
    void getdata();
};

int main(){
    Employee e1,e2;
    e1.setdata(1);
    e1.getdata();
    // e2.setdata();
    // Employee : programmer p1,p2;
    // p1.setdata(1);
    // p1.getdata();

    return 0;
}