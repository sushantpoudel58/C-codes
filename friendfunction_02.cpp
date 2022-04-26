/* Q.) Create distance which have a member data meter  to measure the distance in meters , having a input 
member function with a friend function    cnvt_to_cm()  --> convert to centimeter  */


#include<iostream>

using namespace std;

class Distance{
    int meter;
    public:
    void input();
    friend int cnvt_to_cm(Distance ob);
};

void Distance::input(){
    cout<<"\n Distance in meter ?";
    cin>>meter;
}
int cnvt_to_cm(Distance ob){
    return ob.meter*100;
}
int main(){
    Distance obj;
    obj.input();
    cout<<"\n Distance in cm ="<<cnvt_to_cm(obj);

    return 0;
}