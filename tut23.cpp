#include <iostream>
using namespace std;

class shop
{
    int counter;
    int itemId[100];
    int itemPrice[100];

public:
    void intlCounter(void){counter=0;}
    void setPrice(void);
    void display(void);
};

// void shop :: intlCounter(void){
//     cout<<"enter the total number of Items"<<endl;
//     cin>>counter;
// }

void shop ::setPrice(void)
{
    cout << "enter the itemId is " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter the itemPrice " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price with itemId " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.intlCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.display();
    return 0;
}