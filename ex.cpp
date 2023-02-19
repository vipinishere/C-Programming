#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "enter a number for check is armstrong are not" << endl;
    cin >> n;
    int originalNum = n;
    // int length = sizeof(n);
    // length = length / 4;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }
    if (sum == originalNum)
    {
        cout << sum << " is a armstrong " << endl;
    }
    else
        cout << sum << " is not a armstrong " << endl;

    return 0;
}

/* #include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main(){
    char string[100];
    cout<<"enter a string :";
    cin >> string;
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i]!= string[length-i-1])
        {
            cout<<"given string is not a palindrom"<<endl;
            break;
        }
        else{
            cout<<"is a palindrom "<<endl;
            break;
        }

    }
    return 0;
} */

/* #include<iostream>
#include<cmath>
#include<conio.h>
#include<fstream>
using namespace std;

int fibonacci(int);
int main(){
    int n;
    cout<<"enter the length of fibonacci series "<<endl;
    cin >>n;
    fibonacci(n);
    return 0;
}

int fibonacci(int length){
    int f0 = 0,f1 = 1;
    int f2 = 0;
    for (int i = 0; i < length; i++)
    {
        if (i==0)
        {
            cout<<f0<<endl;
            i++;
        }
        else if (i==1)
        {
            cout<<f1<<endl;
            i++;
        }
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
        cout<<f2<<endl;
    }
    return 0;
} */

/* #include<iostream>
#include<cmath>
#include<conio.h>
#include<fstream>
using namespace std;

int swap(int*,int*);
int main(){
    int x,y;
    cout<<"enter the value of x & y respectively :"<<endl;
    cin >> x;
    cin >> y;
    cout<<"value before swapping is :"<<endl<<" x : "<<x<<endl<<" y : "<<y<<endl;
    swap(&x,&y);
    cout<<"value before swapping is :"<<endl<<" x : "<<x<<endl<<" y : "<<y<<endl;
    return 0;
}

int swap(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
    return 0;
} */