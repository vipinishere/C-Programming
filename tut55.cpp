//  pointers in Derived Class
// polymarism in c++
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

class Base {
    public:
    int var_base;
    void display(){
        cout<<"value in var_base is : "<<var_base<<endl;
    }

};

class Derived : public Base{
    public:
    int var_derived;
    void display(void){
        cout<<"value in var_base is : "<<var_base<<endl;
        cout<<"value in var_derived is : "<<var_derived<<endl;
        cout<<max(var_base,var_derived);
    }  
};

int main(){
    Base * base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->var_base = 30;
    base_pointer->display();

    Derived * derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_base = 3000;
    derived_pointer->var_derived = 4000;
    derived_pointer->display();

    return 0;
}