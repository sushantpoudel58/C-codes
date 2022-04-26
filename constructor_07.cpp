// Program to demonstrate user defined copy constructor

#include<iostream>
#include<math.h>

using namespace std;

class uc_const{
    int x;
     int y;

     public:

     uc_const(int a, int b){
         x=a;
         y=b;
     }
     uc_const(uc_const  &o){     // small o
         int r;
        // float th;

         r=sqrt(pow(o.x,2)+pow(o.y,2));

         cout<<"radius of supplied coordinates:"<<r;
     }

};
int main(){
    uc_const ob(10,40);
    uc_const ob1(ob);
return 0;
}