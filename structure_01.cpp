#include<iostream>
//#include<string.h>

using namespace std;

struct student{    // declare a structure named student
    int age=20;
    float height=5.3;
    char name='s';


};


int main(){
    struct student ob;
    ob.age;               // memeber accessed by object
    ob.height;
    ob.name;

   /* cout<<"May I know your age ?"<<endl;
    cin>>age;
    cout<<"May I know your height ?";
    cin>>height;
    cout<<"May I your faculty in which you are studying ?";
    cin>>faculty; */

    
    cout<<ob.name<<"\n"<<ob.age<<"\n"<<ob.height<<"\n "<<endl;    // print the structure members
  
    return 0;
}