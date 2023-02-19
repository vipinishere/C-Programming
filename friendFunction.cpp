#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    friend complex sumComplex(complex o1,complex o2);
    public:
    void inputNum(int x,int y)
    {
        a=x;
        b=y;
    }

    void outputNum()
    {
        cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumComplex(complex o1,complex o2)
{
    complex o3;
    o3.inputNum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;
    c1.inputNum(7,4);
    c1.outputNum();
    c2.inputNum(5,3);
    c2.outputNum();
    sum = sumComplex(c1,c2);
    sum.outputNum();
    return 0;
}