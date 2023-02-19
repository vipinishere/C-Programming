#include<iostream>
#include<fstream>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){
    string st = "hello everyone";
    string st1;
    ofstream out("simple.txt");  //write operation 
    out<<st;

    ifstream in("simple60a.txt"); //Read operation
    getline(in, st1);
    cout<<st1<<endl;
    return 0;
}