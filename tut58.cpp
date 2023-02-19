#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

// Pure virtual function are used in runTime polymorphism
// & Abstract Base class........

class CWH {
    protected:
    string title;
    float rating;
    public:
    CWH(string *s,float r){
        title = *s;
        rating = r;
    }
    virtual void display()=0;
};

class CWHvideo : public CWH {
    protected:
    float videlLength;
    public:
    CWHvideo(string *s, float r, float vl):CWH(s,r){
        videlLength = vl;
    }
    void display(void){
        cout<<"title is :"<<title<<endl;
        cout<<"rating is :"<<rating<<endl;
        cout<<"videoLength is :"<<videlLength<<" mintus"<<endl;
    }
    
};

class CWHtext : public CWH {
    protected:
    int words;
    public:
    CWHtext(string *s, float r, int w):CWH(s,r){
        words = w;
    }
    void display(void){
            cout<<"title is :"<<title<<endl;
            cout<<"rating is :"<<rating<<endl;
            cout<<"total words is :"<<words<<endl;
        }
};

int main(){
    string title;
    float rating, vl;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vl = 4.56;
    rating = 4.89;
    CWHvideo djVideo(&title, rating, vl);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHtext djText(&title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
