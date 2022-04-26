//how can you access  a member function defined as private in a class through object. explain with example

#include<iostream>

using namespace std;

class pvtacc{
    private:
    char name[20];
    void setdata(){
        cout<<"\n Your good name please ";
        cin>>name;
    }
    public:
    void great(){
        setdata();
        cout<<"\n\n You are welcome Mr./Mrs" << name;
    }
};

int main(){
    pvtacc ob;
    //ob.setdata(); // pvt member function can not be accessed by object error produces
    ob.great();

    return 0;
}
// the private member function is not accessed directly,,  
//   object<-- public<--  private