// friend classes in c++;
#include<iostream>
using namespace std;

// forword declaration of class complex;
class complex;

class calculator
{
    public:
    int add(complex);
    int sumOfRealComplex(complex o1,complex o2);
    int sumOfImgComplex(complex o1,complex o2);
};

class complex 
{
    int a,b;
    // friend class calculator;
    friend int calculator::sumOfImgComplex(complex o1,complex o2);
    friend int calculator::sumOfRealComplex(complex o1,complex o2);
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

int calculator ::sumOfRealComplex(complex o1,complex o2)
{
    return (o1.a+o2.a);
}

int calculator ::sumOfImgComplex(complex o1,complex o2)
{
    return (o1.b + o2.b);
}


int main(){
    complex o1,o2;
    o1.inputNum(12,8);
    o2.inputNum(6,7);

    calculator o3;
    int res = o3.sumOfRealComplex(o1,o2);    
    cout<<res<<endl;
    int res1 = o3.sumOfImgComplex(o1,o2);
    cout<<res1<<endl;
    cout<<o3.sumOfRealComplex(o1,o2);
    return 0;
}