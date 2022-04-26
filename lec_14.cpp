/* WAP in OOP which contain two string(char) datamember in private, and three member functions
, among them once in private to set the data and another in public, such that the protected member functions
 concatenates the two private member data and the public member functions the concatenated data*/ 

 #include<iostream>

 using namespace std;

 class concat{
     private:
     string str1, str2, str3;

     void setdata(){
         cout<<"Enter first string:";
         cin>>str1;
         cout<<"Enter second string:";
         cin>>str2;
     }
     protected:
     void conc(){
        str3= str1+str2;
        //strcat(str1,str2)
     }
     public:
     void display(){
         setdata();
         conc();
         cout<<str3;
     }
    
 };

 int main(){
     concat ob;
     ob.display();
    
    return 0;
 }

 

