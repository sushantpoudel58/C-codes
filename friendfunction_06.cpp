/* Q.) Create distance which have a member data meter  to measure the distance in meters , having a input 
member function with a friend function    cnvt_to_cm()  --> convert to centimeter  */

#include<iostream>

using namespace std;

class distance{
     private:
      int D, d;

      public:
      void setdata();      // function declaration (prototyping)
      friend int cnvt_to_cm(distance  ob);
      
      distance(){    // default constructor :- automatically runs when an object of the class is created( cause it doesnt have any returntype and arguement)
          d=0;
          D=0;

      }
 };
 void distance::setdata(){
     cout<<"\n Enter the value of distance in meter :";
     cin>>d;

 }

 int distance_cm(d ob){        // friend function definition
     return ob.D*100;   // here ob directly accessing private data
 }
 int main(){
     distance obj;
     obj.setdata();
     cout<<"\n The distance in  cm ="<<distance(obj);  // excepting the friend function without object and dot operator
     return 0;
 }
    

    //  friend function laai  call garna lai kunai object chaidaina 


