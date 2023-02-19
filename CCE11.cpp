#include <iostream>
using namespace std;

#define MAX 10

class student
{
private:
    char name[30];
    int rollNo;
    int total;
    float perc;

public:
    void getDetails(void);
    void putDetails(void);
};

void student::getDetails(void)
{
    int a[5];
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    for (int i = 0; i < 4; i++)
    {
        cout << "enter the marks of subject " << i + 1 << endl;
        cin >> a[i];
        cout<<a[i]<<endl;
    }
    for (int j = 0; j < 4; j++)
    {
        total += a[j];
    }
    
    cout << "total marks outof 500 is : " << total << endl;
    perc = (float)total / 500 * 100;
}

void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << endl;
    cout << "Roll Number:" << rollNo << endl;
    cout << "Total:" << total << endl;
    cout << "Percentage:" << perc << endl;
}

int main()
{
    student std[MAX]; 
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << ":\n";
        std[i].getDetails();
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Details of student " << (i + 1) << ":\n";
        std[i].putDetails();
    }

    return 0;
}