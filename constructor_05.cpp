// Parameterized constructor

#include<iostream>
using namespace std;

class AB{
    int x;
    public:
    AB(int n){
        x=n*n;
    }
    void disp(){
        cout<<x<<endl;
    }

};
int main(){
    AB ob(5);           // Implicit constructor call
    AB ob1=AB(10);      // Explicit call
    ob.disp();          // o/p = 25
    ob1.disp();         // o/p =100
return 0;
}