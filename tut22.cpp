#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; 

public:
    void read();
    void chk_bn(void);
    void ones_compliment(void);
    void display();
};

void binary ::read()
{
    cout << "Enter the strings " << endl;
    cin >> s;
}

void binary ::chk_bn()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrrect binary " << endl;
            break;
        }
    }
}

void binary :: ones_compliment(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if (s.at(i)== '0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
}

void binary :: display(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{
    binary s;
    s.read();
    s.chk_bn();
    s.display();
    s.ones_compliment();
    s.display();
    return 0;
}