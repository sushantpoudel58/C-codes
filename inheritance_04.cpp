// public visibiity  program

#include<iostream>
using namespace  std;

class Base{
    private:
    int x;
    protected:
    int y;
    public:
    int z;

    Base(){    // constructor to initialize data members
        x=1;
        y=2;
        z=3;
    }
};
class derive:public Base{
    // y and  z becomes protected members of  class derive and x remains private

    public:
    void showdata(){
        cout<<"\n x is not accessible";
        //
        cout<<"\n value of y is "<<y;
        cout<<"\n vzlue of z is "<<z;
    }
};

int main(){
    derive a;  // object of derived class
    a.showdata();
    // a.x=1; not valid : private member cant be accessed outside of class
    // a.y=2; not valid : y is now protected member of derived class 
    //a.z=3;  not valid : z is also now a public member  of  derived class
return 0;
}   