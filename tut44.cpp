// constructor in derived class 

#include<iostream>
using namespace std;

class base1 {
    protected:
    int data1;
    public:
    base1(int a){
        data1 = a;
        cout<<"class base1's constructor is called"<<endl;
    }
    void setData(int i){
        data1 = i;
        cout<<"data in data1 is :"<<data1<<endl;
    }
};

class base2{
    protected:
    int data2;
    public:
    base2(int b){
        data2 = b;
        cout<<"class base2's constructor is called"<<endl;
    }
};

class derived : public base1,public base2{
    protected:
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base1(c),base2(d){
        derived1 = a;
        derived2 = b;
        cout<<"derived class constructor is called"<<endl;
    }

    void printNumber(){
        cout<<"derived1 = "<<derived1<<" derived2 = "<<derived2<<endl;
    }
};

int main(){
    derived d(3,4,2,4);
    d.printNumber();
    d.setData(20);
    return 0;
}