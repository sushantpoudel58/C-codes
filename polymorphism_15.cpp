/* creating user defined function*/

#include<iostream>
//#include<exception.h> 
using namespace std;

class newException:public exception
{
    virtual const char*what() const throw()
    {
        return"newException occured";
    }

}newex;      // object 
int main(){
   try
   {
       throw newex;
   }
   catch(exception& ex)
   {
       cout<<ex.what()<<'\n';
   }

   
    
return 0;
}