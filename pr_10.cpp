#include<iostream>
using namespace std;

class Computer{
    int x;
    public:
    void students(){
        cout<<"\n How many students ?";
        cin>>x;
    }

};
int main(){
    Computer ob;
    ob.students();
return 0;
}