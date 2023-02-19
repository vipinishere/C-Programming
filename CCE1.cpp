#include<iostream>
using namespace std;

class student 
{
    int static count;
    int roll_no;
    int total=0;
    int a[5];
    char name[5];
    int num;
    public:
    void input();
    void output();
};

int student :: count=0;

void student :: input()
{
    count++;
    num=count;
    cout<<"enter the your name "<<endl;
    cin>>name;
    cout<<"enter your roll number "<<endl;
    cin>>roll_no;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the marks of subject "<<i+1<<" : ";
        cin>>a[i];
    }
    total = total + a[0] +a[1]+a[2]+a[3]+a[4];
}

void student :: output(){
    cout<<"Details of student "<<num<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"total number of student is "<<total<<endl;
}

int main(){
    int n;
    cout<<"enter total number of student :";
    cin>>n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    for (int j = 0; j < n; j++)
    {
        s[j].output();
    }
    return 0;
}