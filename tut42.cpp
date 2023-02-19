// Virtual Base class  

#include<iostream>
using namespace std;

class Base {
    protected:
    int a;
    public:
    void getData();
};

class Base1 : virtual public Base{
    protected:
    public:
    void setData();
};

void Base1 :: setData(){
    cout<<"i am member of class base1"<<endl;
}

class Base2 :virtual public Base{
    protected:
    public:
    void setData();
};

void Base2 ::setData(){
    cout<<"i am member of class base2";
}

class derived : public Base1, public Base2{
    protected:
    int b;
    public:

    void setData(){
        cout<<"enter the value of b "<<endl;
        cin>>b;
        a = b;
        cout<<a;
    }
};

int main(){
    derived d;
    d.setData();
}