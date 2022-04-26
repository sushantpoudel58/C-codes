/* WAP to compare two supplied string in OOP the class must have
--> data members in private section 
--> member function for strings input in protected section
--> member function for string comparision and display in public section */

#include<iostream>
#include<string.h>

using namespace std;

class str{
    private:
    char str1[20],str2[20];
    protected:
    void setdata(){
        cout<<"\n enter 1st string:";
        cin>>str1;
        cout<<"\n enter 2nd string:";
        cin>>str2;
    }
    public:
    void comp(){
        setdata();
       int n;
        n=strcmp(str1,str2);

        if(n==0){
            cout<<"both string are equal";
        
        }
         else if(n==1){
            cout<<" the string "<<str1<<" is greater than "<<str2<<" ";

        }
        else{
            cout<<"the string "<<str2<<" is greater than "<<str1<<" ";
        }
    }


};

int main(){
    str ob;
    ob.comp();
    
    return 0;
}