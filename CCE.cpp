#include <conio.h>
#include <iostream>
using namespace std;

class student
{
public:
    int total[50];
    int setdata();
    int getdata();
};

int student ::setdata()
{
    int totstu;
    int i, j, k;

    int rollno[50];
    int marks[5];

    cout << "enter the total number of students " << endl;
    cin >> totstu;
    for (int i = 0; i < totstu; i++)
    {
        cout << "enter the roll no. of " << i + 1 << " student" << endl;
        cin >> rollno[i];
        for (int j = 0; j < 4; j++)
        {
            cout << "enter the marks of subject " << j + 1 << endl;
            cin >> marks[j];
        }
    }
    return 0;
}

int student::getdata()
{

    for (int i = 0; i < 2; i++)
    {
        cout << "the total number of student " << i + 1 << " is " << total[i] << endl;
    }

    return 0;
}

int main()
{
    student vipin;
    vipin.setdata();
    vipin.getdata();
    return 0;
}