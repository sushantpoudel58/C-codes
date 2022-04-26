// Program to demonstrate  Message passing  mechanism with specific message 

#include<iostream>
using namespace std;

class area{
    public:
    float rad;
    void calarea(float r){
        cout<<"\n Area of the circle of specified  radius:"<<2*3.14*r*r;
    }

};
int main(){
    float radi;
    area ar;
    ar.rad=45.5;
    ar.calarea(ar.rad);

    cout<<"\n Enter your new radius value :";
    cin>>radi;

    ar.rad=radi;
    ar.calarea(ar.rad);

    
return 0;
}