#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

// RunTime polymorphism
// Introducting virtual functions

class Base{
    public:
    int var_base=10;
    virtual void display(void){
        cout<<"1. the value in var_base is :"<<var_base<<endl;
    }
};

class Derived : public Base{
    public:
    int var_derived =20;
    void display(void){
        cout<<"2. the value in var_base is :"<<var_base<<endl;
        cout<<"2. the value in var_derived is :"<<var_derived<<endl;
    }
};

class Derived1 : public Derived {
    protected:
    int var_derived1=30;
    public:
    void display(){
        cout<<"3. the value in var_base :"<<var_base<<endl;
        cout<<"3. the value in var_derived :"<<var_derived<<endl;
        cout<<"3. the value in var_derived1 :"<<var_derived1<<endl;
    }

};


int main(){
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    Derived1 obj_derived1;
    // base_pointer = &obj_derived;
    /* base_pointer->var_base = 10;
    // base_pointer->display();
    // base_pointer->var_derived = 100; // Base class pointer only can access base class data members    base_pointer->display();
 */
    Derived *derived_pointer;
    /* derived_pointer = &obj_derived;
    // derived_pointer = &obj_base; //this will throw error
    derived_pointer->var_derived = 100;
    derived_pointer->display();
 */
    Derived1 *derived1_pointer;
    derived_pointer = &obj_derived1;
    derived1_pointer->
    derived_pointer->display();



    return 0;
}