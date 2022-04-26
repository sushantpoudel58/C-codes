// User defined default constructor

#include<iostream>
using namespace std;

class User_def_const{
    int x,y;
    public:
    User_def_const(){
        x=10;
        y=20;
    }
    void disp(){
        cout<<"\n x="<<x;
        cout<<"\n y="<<y;
    }
};
int main(){
    User_def_const ob;
    ob.disp();
return 0;
}