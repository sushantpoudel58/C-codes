// simple class concept program

#include<iostream>    

using namespace std;

class test{
    private:
    char name[20]; /*member variables declarations & being static cannot be initialized during declarations.
    It assigns attributes to the class*/

    int age;

    public:
    void set_data(){             // member function declaration(sets properties of class)
        cout<<"input your name:";
        cin>>name;
        cout<<"input age:";
        cin>>age;
    }
    void disp_data(){
        cout<<"\n Your good name :"<<name;
        cout<<"\n Your age is:"<<age;
    }
};
int main(){
    test ob;
    ob.set_data();     // member function is called (message passing)
    ob.disp_data();    // member function is called (message passing)

    return 0;
}