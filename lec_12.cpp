// WAP to demonstrate public access modifiers(specifiers)
//( public acccesifiers which allows external agents to direct across the class members)

#include<iostream>

using namespace std;

class area{
    public:
   // private:
    float rad; // member data (properties/attributes of class)
    
    void calArea(){     // member functions / method of class
        cout<<"\n  Area of the circle of specified radius :" << 2*3.14*rad*rad;
    }
};

int main(){
    float radi;    // local variable 
    area ar;        // object of class
    ar.rad=45.5;
    ar.calArea();
    cout<<"\n Enter your new radius value:";
    cin>>radi;
    ar.rad=radi;
    ar.calArea();    //  ar= message receiver, calArea= agent , rad= message

    return 0;
}



