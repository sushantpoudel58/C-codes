// Program to demonstrate message passing without specific modifier

#include<iostream>
using namespace std;

class area{
    public:
    float rad;
    void calArea(){
        cout<<"\n Area of the circle of specified radius is :"<<2*3.14*rad*rad;
    }
};

int main(){
    float radi;
    area ar;
    ar.rad=45.5;
    ar.calArea();

    cout<<"\n Enter your radius value:";
    cin>>radi;

    ar.rad=radi;
    ar.calArea();
return 0;
}