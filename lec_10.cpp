// WAP to demonstrate public access modifiers(specifiers)
//( public acccesifiers which allows external agents to direct across the class members)

#include<iostream>

using namespace std;

class area{
    public:
    //private:
    float rad; // member data (properties/attributes of class)
    
    void calArea(float r){     // member functions / method of class
        cout<<"\n  Area of the circle of specified radius :" << 2*3.14*r*r;
    }
};

int main(){
    float radi;    // local variable 
    area ar;        // object of class
    ar.rad=45.5;
    ar.calArea(ar.rad);
    cout<<"\n Enter your new radius value:";
    cin>>radi;
    ar.calArea(radi);

    return 0;
}


