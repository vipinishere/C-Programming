#include<iostream>
using namespace std;
#define n 100

class stack 
{
    // int* arr;
    int arr[n];
    int top = -1;
    public:
    // stack(){
    //     arr = new int[n];
    //     top = -1;
    // }

    void push(int x)
    {
        if (top==n-1)
        {
            cout<<"stack overflow "<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop()
    {
        if (top==-1)
        {
            cout<<"no element to pop "<<endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top==-1)
        {
            cout<<"no element in stack ";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
    }

};

int main(){
    stack s1;
    s1.push(2);
    s1.push(4);
    cout<<"top value is ";
    cout<<s1.Top()<<endl;
    s1.push(6);
    s1.push(8);
    cout<<"top value is ";
    cout<<s1.Top()<<endl;
    s1.push(10);
    s1.push(12);
    cout<<"top value is ";
    cout<<s1.Top()<<endl;
    s1.empty();
    s1.pop();
    s1.pop();
    cout<<"top value is ";
    cout<<s1.Top()<<endl;
    s1.pop();
    s1.pop();
    cout<<"top value is ";
    cout<<s1.Top()<<endl;
    s1.pop();
    s1.pop();
    cout<<"top value is "<<endl;
    cout<<s1.Top()<<endl;
    s1.pop();
    s1.empty();
    return 0;
}
