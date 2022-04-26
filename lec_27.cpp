// WAP in OOP ,  to convert polar coordinate value radius  r     and   Theta  given  value into cartesian  coordinate 

#include<iostream>
#include<math.h>

using namespace std;

class Cartesian{
    int x;
    int y;

    public:
    /*cartesian(int a, int b){
        x=a;
        x=b;
    }*/
    value(){
        float theta;
        int r;

        cout<<"\n Enter the value of r and theta :";
        cin>>r>>theta;

        x= r * cos(theta);
        y=r * sin(theta);

        cout<<"\n The value of x and y are :";

    }

    
};
int main(){
    Cartesian ob;
    ob.value
return 0;
}