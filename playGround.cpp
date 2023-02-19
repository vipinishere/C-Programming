// c++ code passing object as a reference object;


#include<iostream>
#include<iostream>
using namespace std;

// forword declearation of class b;
class B;

class A 
{
    int a;
    friend void interchange(A &,B &);
    public:
    void indata(int x)
    {
        a = x;
    }
    void outdata(void){
        cout<<"data in a is "<<a<<endl;
    }
};


class B 
{
    int b;
    friend void interchange(A &,B &);
    public:
    void indata(int x)
    {
        b=x;
    }
    void outdata(void){
        cout<<"data in b is "<<b<<endl;
    }
};

void interchange(A &o1,B &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}


int main(){
    class A o1;
    class B o2;
    o1.indata(5);
    o2.indata(6);
    o1.outdata();
    o2.outdata();
    interchange(o1,o2);
    cout<<endl<<endl<<endl;
    o1.outdata();
    o2.outdata();
    return 0;
}








/* // c++ Program to demonstrate the working of friend fuction ;
#include<iostream>
using namespace std;

class Distance 
{
    private:
    int length;
    //Declare friend function;
    friend int addSumValue(Distance D1);
    public:
    //constructor to initialize length to 0;
    Distance() : length(0){}
};
//Friend function definition
int addSumValue(Distance D1)
{
    //accessing private members from the friend function
    D1.length += 5;
    return D1.length;
}

int main(){
    //create object for class Distance
    Distance D1;
    cout<<"now value is "<<addSumValue(D1);
    return 0;
} */


/* //Add Members of two different class 
#include<iostream>
using namespace std;

//forword declaration of class b;
class B;

class A
{
    private:
    int a;
    //declaration of friend function..
    friend int add(A,B);
    public:
    //constructor to initialized a to 30;
    A():a(30){}
};

class B
{
    private:
    int b;
    // declaration of friend function 
    friend int add(A,B);
    public:
    //constructor to initialized b to 20;
    B():b(20){}
};

int add(A oA,B oB)
{
    //access private member of class A and class B ;
    return (oA.a + oB.b);
}

int main(){
    A oA;
    B oB;
    // print the sum of private memeber of both class A and class B;
    cout<<"sum is "<<add(oA,oB);
    return 0;
}
 */