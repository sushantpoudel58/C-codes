// Copy  constrructor --->>    other consytructor program are saved in   pr 07 08 files
// they are of 2 types 

#include<iostream>
using namespace std;

class A{
    int x_cord,y_cord;
    public:
    
    A(){                         // Default constructor
        x_cord=0;
        y_cord=0;
    }

    A(int x, int y){            // parameterized constructor
        x_cord=x;
        y_cord=y;
    }
    void display(){
        cout<<"\n x_vertex value="<<x_cord;
        cout<<"\n y_vertex value="<<y_cord;

    }
};

int main(){
    A ob(10,20);  // ob object created and parameterized constructor called.
    A obj;
    obj=ob;        // using default copy constructor initializing obj object  (system generated constructor comes in work when one object is assigned into another object)
    ob.display();
    obj.display();
return 0;
}