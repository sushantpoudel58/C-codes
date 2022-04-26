// WAP  to demonstrate public access modifiers(specifiers)

#include<iostream>
using namespace std;

class area{
    public:
    float rad;
    void calArea(float r){
        cout<<"\n Area of the circle of specified radius is :"<<2*3.14*r*r;
    }
};
int main(){
    float radi;
    area ar;
    ar.rad=45.5;
    ar.calArea(ar.rad);

    cout<<"\n Enter your new radius value:";
    cin>>radi;

    ar.calArea(radi);

return 0;
}