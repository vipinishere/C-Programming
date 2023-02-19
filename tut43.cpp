#include<iostream>
using namespace std;

class Grandfather {
    protected:
    char name[10];
    public:
    void setName(){
        cout<<"enter your name :";
        cin>>name;
    }
    void printName(){
        cout <<name<<endl;
    }
};

class father1 : virtual public Grandfather {
    public:

};

class father2 : virtual public Grandfather {
    
};

class son : public father1, public father2 {

};


int main(){
    Grandfather g1;
    son s1;
    g1.setName();
    s1.setName();
    s1.printName();
    g1.printName();
    
    return 0;
}