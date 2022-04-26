#include<iostream>
using namespace std;
 
 class B;
 class A{
     private:
     int x;
     public:
     void input(){
         cout<<"\n Enter integer :";
         cin>>x;

     }
     friend void max(A a, B b);
 };

 class B{
     private:
     int x, y;
     public:
     void input(){
         cout<<"\n Enter an integer number:";
         cin>>y;
     }
     friend void max( A a, B b);
 };

 void max(A a, B b){
     if(a.x > b.y){
         cout<<"Class A has biggest Data member value:"<< a.x;
     }
     else if(b.y >a.x){
         cout<<"\n Class B has biggest Data member value:"<<b.y;
     }
     else{
         cout<<"\n Both are equal ";
     }
 }

int main(){
    A o1;
    B o2;
    o1.input();
    o2.input();
    max( o1, o2);

return 0;
}