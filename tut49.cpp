#include <iostream>
using namespace std;

/*
    syntax for initialization list in constructor
    constructor(argument-list) : initilization-section
    {
        assignment + other code;
    }
 */
class Test
{
private:
    int b,a;
public:
    // Test(int i,int j):a(i),b(j) {
    // Test(int i,int j):a(i),b(2 * j) {
    // Test(int i,int j):a(i),b(i+j) {
    // Test(int i,int j):b(j),a(i+b){ --> this will create a problem because a will be first initialize first

    Test(int i,int j):a(i),b(a+j) {
        cout<<"constructor invoked "<<endl;
        cout<<"the value of a: "<<a<<endl;
        cout<<"the value of b : "<<b<<endl;
    }
};


int main(){
    Test t(15,20);
    return 0;
}