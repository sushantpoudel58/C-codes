// Demonstrating the working of     Friend Friend

/* Q.) Create a class area having private member data length and breadth with a member function setdata to input length 
 and breadth value and a friend function to calculate area by accessing the private Memberdata  */


 #include<iostream>

 using namespace std;

 class Ar{
     private:
      int l, b;

      public:
      void setdata();      // function declaration (prototyping)
      friend int area(Ar  ob);
      
      Ar(){    // default constructor :- automatically runs when an object of the class is created( cause it doesnt have any returntype and arguement)
          l=0;
          b=0;

      }
 };
 void Ar::setdata(){
     cout<<"\n Enter the value of length and breadth :";
     cin>>l>>b;

 }

 int area(Ar ob){        // friend function definition
     return ob.l * ob.b;   // here ob directly accessing private data
 }
 int main(){
     Ar  obj;
     obj.setdata();
     cout<<"\n The area="<<area(obj);  // excepting the friend function without object and dot operator
     return 0;
 }
    

    //  friend function laai  call garna lai kunai object chaidaina 