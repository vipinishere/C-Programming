#include <iostream>
using namespace std;
// Array of object using pointers
class shop
{
protected:
    int id;
    float price;

public:
    void setData(int id, float price)
    {
        this->id = id;
       this->price = price;
    }

    void getData(void)
    {
        cout << "product id is : " << id
             << " & price is :"<<price << endl;
    }
};

int main()
{
    int n =2;
    shop* shops = new shop[n];
    shop* shops2 = shops;
    int p;
    float q;
    for (int i = 0; i < n; i++)
    {
        cout<<"p :";
        cin >> p;
        cout<<"q :";
        cin >> q;
        shops->setData(p, q);
        shops++;
    }
    for (int i = 0; i < n; i++)
    {
        shops2->getData();
        shops2++;
    }

    return 0;
}