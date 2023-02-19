// Multilevel inheritance
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;
    string name;

public:
    void setRoll_number(int);
    void getRoll_number(void);
};
void student ::setRoll_number(int R)
{
    roll_number = R;
}

void student ::getRoll_number(void)
{
    cout << "student's roll number is " << roll_number << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::getMarks()
{
}

class Result : public Exam
{
    float percantage;

public:
    void getPer();
};

void Result ::getPer()
{
    percantage = (maths + physics) / 2;
    cout << "your percantage is " << percantage << "%" << endl;
}

int main()
{
    Result vipin;
    vipin.setRoll_number(420);
    vipin.getRoll_number();
    vipin.setMarks(67.0, 70.0);
    vipin.getPer();
    return 0;
}