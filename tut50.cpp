#include<iostream>
using namespace std;

class Complex {
    int real;
    int image;
    public:
    void setData(int a,int b){
        real = a;
        image = b;
    }
    void getData(void){
        cout<<"the complex number is "<<real<<" + "<<image<<"i"<<endl;
    }
};

int main(){
    Complex c1;
    Complex *a = &c1;
    Complex *b = a;
    // (*a).setData(4,9);
    // a ->setData(3,3);
    // (*a).setData(5,3);
    // (*a).getData();
    b->setData(5,3);
    b->getData();
    return 0;
}