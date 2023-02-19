// Dynamic inisilization of object..;
#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show()
    {
        cout << "the principal was " << principal
             << " after " << years << " years "
             << " your money is " << returnValue << endl;
    }
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    intrestRate = float(R) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;
    cout << "enter total pricipal: ";
    cin >> p;
    cout << "enter time (in years): ";
    cin >> y;
    cout << "enter Intrest Rate (in fraction): ";
    cin >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "enter total pricipal: ";
    cin >> p;
    cout << "enter time (in years): ";
    cin >> y;
    cout << "enter Intrest Rate (in %): ";
    cin >> R;

    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}