// Exploration of member data accessibility through acccess specifier 
#include<iostream>
using namespace std;

class xyz{
    //the private member of the class cannot be accessed by the object of same class 
    //public:       // public member of the class are directly accessible  to the object of the same class

    protected:

    int x=10,y;  // member data 
   // public:
    void input(){       // member function
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;

    }
};
int main(){
    xyz ob;
    ob.x=10;
    ob.y=15;
    ob.input();

    return 0;
}
