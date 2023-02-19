#include<iostream>
#define n 100
using namespace std;


class complex 
{
    int a,b;
    public:
    //default constructor
    complex(void);
    void outputNum()
    {
        cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
//default constructor defination
complex ::complex(void){
    a = 5;
    b= 12;
}

int main(){
    complex b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].outputNum();
    }
    
    // a1.outputNum();
    // a2.outputNum();
    // a3.outputNum();
    return 0;
}