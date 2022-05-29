/* exaomple of pure virtual function */

#include<iostream>
using namespace std;

class BaseClass // Abstract class
{
    public:
    virtual void display1()=0;   // Pure virtual function or abstract function
    virtual void display2()=0;   // PURE VIRTUAL FUNCTION OR ABSTRACT FUNCTION
    void display3()
    {
        cout<<"\n This is display3() method of  Base class";

    }
};

class DerivedClass:public BaseClass{
     public:
     void display1()
     {
         cout<<"\n This is display1() method of Derived class";

     }
     void display2()
     {
         cout<<"\n This is display2() method of Derived class ";
     }

};
int main(){
    DerivedClass D;

    D.display1();   //  This will invoke Display1() method of derived class
    D.display2();   //    "         "    Display2()  "        "
    D.display3();   //   "           "   Display3()   "       "
return 0;
}