#include<iostream>
using namespace std;


int swaping(int ,int);
int main(){
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    cout<<"the final value is : "<<swaping(a,b);
}

int swaping(int x, int y){
    int c = 0;
    cout <<"value before swaping a = "<<x<<endl<<" b = "<<y<<endl;
    c = x;
    x=y;
    y=c;
    cout <<"value after swaping a = "<<x<<endl<<" b = "<<y<<endl;
}