#include<iostream.h>
#include<conio.h>

void main(){
    int n,redius,side,length,width;
    float area;
    clrscr();
    cout<< "choose 1 out of 3 "<<endl;
    cout<< "1. find the Area of Circle "<<endl;
    cout<< "2. find the Area of Rectangle "<<endl;
    cout<< "3. find the Area of Square "<<endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout<<"enter the value of Redius "<<endl;
        cin >> redius;
        area = 3.14 * redius * redius;
        cout<<"the Area of circle is : "<<area<<endl;
        break;
    case 2:
        cout<<"enter the value of length and width"<<endl;
        cin>>length;
        cin>>width;
        area = length * width ;
        cout<<"the area of retangle is :"<<area<<endl;
        break;
    case 3:
        cout<<"enter the value side"<<endl;
        cin>>side;
        area = side * side;
        cout<<"the area of squere is: "<<area<<endl;
        break;
    default:
        cout<<"error"<<endl;
        break;
    }

    getch();
}