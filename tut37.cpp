#include <iostream>
using namespace std;

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.9;
    }
    Employee(){}
};

// creating programmer class derived from Employee base class

class programmer : public Employee
{
    public:
    int languageCode;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int
main()
{
    Employee harry(11), rohan(12);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();
    return 0;
}