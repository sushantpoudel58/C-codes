
#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void area(){
        cout<<"Base class area Calculation";
    }

};

class Square:public Shape{
    public:
    void area(){
        cout<<"Derived class area calculation ";
    }

};
int main(){
    Shape *sp;
    Square sq;
    sp=&sq;
    sp->area();
return 0;
}