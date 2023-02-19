#include<iostream>
using namespace std;
// "This" pointer 
class A {
    private:
    int a;
    public:
    A & setData(int a){
        this->a = a;
        return *this;
    }
    void getData(){
        cout<<"value in a :"<<a<<endl;
    }
};

int main(){
    A a;
    a.setData(30).getData();
    return 0;
}