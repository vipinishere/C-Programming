#include<iostream>
using namespace std;

class BankEmployee
{
    private:
    int a,b,c;
    public:
    int d=100,e;
    void setdata(int a1,int b1, int c1);
    void getdata();
};

void BankEmployee :: setdata(int a1,int b1,int c1)
{
    a= a1;
    b=b1;
    c=c1;
}

void BankEmployee :: getdata(){
    cout<<"value in a "<<a<<endl;
    cout<<"value in b "<<b<<endl;
    cout<<"value in c "<<c<<endl;
    cout<<"value in d "<<d<<endl;
    cout<<"value in e "<<e<<endl;
}

int main(){
    int a1,b1,c1;
    cin>>a1>>b1>>c1;
    BankEmployee vipin;
    // vipin.d=45;
    vipin.e=a1;
    // vipin.d=b1;
    vipin.setdata(a1,b1,c1);
    // cout<<endl;
    // cout<<endl;
    vipin.getdata();
    // cout<<vipin.d<<endl;
    // cout<<vipin.e<<endl;
    return 0;
}