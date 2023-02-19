#include<iostream>
using namespace std;

#define n 10

class Employee 
{
    int id;
    int salary;
    public:
    void setData(void);
    void getData(void);
};

void Employee :: setData()
{
    salary= 120;
    cout<<"Enter the id of employee : ";
    cin>>id;
}

void Employee :: getData()
{
    cout<<"the id of employee is : "<<id<<endl;
    cout<<"the salary of employee is : "<<salary<<endl;
}

int main(){
    //Employee vipin,sneh,nilesh,kanhaiya;
    // vipin.setData();
    // vipin.getData();
    // sneh.setData();
    // sneh.getData();
    // nilesh.setData();
    // nilesh.getData();
    // kanhaiya.setData();
    // kanhaiya.getData();
    Employee em[n];
    for (int i = 0; i < n; i++)
    {
        em[i].setData();
        cout<<endl;
    }
    for (int j = 0; j < n; j++)
    {
        em[j].getData();
        cout<<endl;
    }
    
    
    return 0;
}