// Internal default constructor

#include<iostream>
using namespace std;

class Internal_constructor{
    int x;
    int y;
    char name[10];

    public:
    void disp(){
        cout<<x<<y;
        cout<<"\n"<<name;
    }
};

int main(){
    Internal_constructor ob;
    ob.disp();
return 0;
}