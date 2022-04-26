/* Friend function acts like a bridge between multiple classes  --------  friend function is also a  Dalaal */  

/* Write an OOP program havimg two clases      class A    class B  with  1 private data member , a input function 
in each class. Both class haver  must have a common  friend function which access thwe private members of both class and       
find out  the highest  data member of the class */


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
     else{
         cout<<"\n Class B has biggest Data member value:"<<b.y;
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