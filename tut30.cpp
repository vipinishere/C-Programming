//Parameterized constructors
//program for calulate distance between two points
#include<iostream>
#include<math.h>
using namespace std;

class point 
{
    int a;
    int b;
    friend int distance(point a,point b);
    public:
    point(int x,int y);
    void Print(void){
        cout<<"the point is ("<<a<<" "<<b<<")"<<endl;
    }
};

point :: point(int x,int y){
    a = x;
    b = y;
}

int distance(point a,point b){
    double distance1 = sqrt(((b.a - a.a)*(b.a - a.a))+ ((b.b - a.b)*(b.b - a.b)));
    return distance1;
}

int main(){
    int ax,ay,bx,by;
    cout<<"enter the value of point 1 "<<endl;
    cout<<"for point 1 (x,y) x : ";
    cin>>ax;
    cout<<"for point 1 (x,y) y : ";
    cin>>ay;
    point a(ax,ay);
    a.Print();

    cout<<"enter the value of point 2 "<<endl;
    cout<<"for point 2 (x,y) x : ";
    cin>>bx;
    cout<<"for point 2 (x,y) y : ";
    cin>>by;
    point b(bx,by);
    b.Print();
    // double distance2 += distance(a,b);
    cout<<"distance between two points is "<<distance(a,b);
    return 0;
}