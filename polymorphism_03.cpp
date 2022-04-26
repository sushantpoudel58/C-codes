/* WAP using  operator overloading to subtract two dates(YY:MM:DD)in  C++, class object concept.  */

#include<iostream>
using namespace std;

class Time{
    int y,m,d;
    public:
    Time(){
        y=0,m=0,d=0;

    }
    void setTime();
    void show(){
        cout<<y<<":"<<m<<":"<<d;
    }
    // overloading '-' operator

    Time operator-(Time);
};

Time Time::operator-(Time t1){  // operator function

Time t;
int a,b;
a=d-t1.d;
t.d=a12;
b=(a/30)-m-t1.m;
t.m=b30;
t.y=(m/60)-y-t1.y;
t.y=t.y%12;

return t;


}
void Time::setTime(){
    cout<<"\n Enter the hour(0-11)";
    cin>>y;
    cout<<"\n Enter  the minute(0-59)";
    cin>>m;
    cout<<"\n Enter the second(0-59)";
    cin>>d;
}
int main(){
    Time t1,t2,t3;
    cout<<"\n Enter the first time:";
    t1.setTime();
    cout<<"\n Enter the second time:";
    t2.setTime();
    t3=t1-t2;
    cout<<"\n First time";
    t1.show();
    cout<<"\n Second time";
    t2.show();
    cout<<"\n Subtract of times";
    t3.show();
    


return 0;
}

