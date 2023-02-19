#include <iostream>
using namespace std;

class student
{
    int static count;
    int id;
    int num;

public:
    void setData();
    void displyData();
};

int student ::count = 0;
void student ::setData()
{
    cout << "enter the id of student " << count+1 << endl;
    cin >> id;
    count++;
    num=count;
}

void student ::displyData()
{
    cout << "the id is " << id << " of student " << num << endl;
}

int main()
{
    student vipin, sakshi, akash, dipika;
    vipin.setData();
    sakshi.setData();
    akash.setData();
    dipika.setData();
    vipin.displyData();
    sakshi.displyData();
    akash.displyData();
    dipika.displyData();
    return 0;
}