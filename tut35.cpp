// Destructor in C++
// distructor never take argument nor return any value.;
#include <iostream>
using namespace std;

class num
{
    int static count;

public:
    num()
    {
        count++;
        cout << "constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "distructor is called for object number " << count << endl;
        count--;
    }
};

int num :: count =0;

int
main()
{
    num n1;
    cout << "consol is in the main function " << endl;
    {
        cout<<"entering in the block "<<endl;
        num n2,n3;
        cout<<"exiting from block "<<endl;
    }

    return 0;
}