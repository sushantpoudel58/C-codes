// table of numbers using class  OOP

#include<iostream>
using namespace std;

class XYZ{
    int i,n,r;

    public:
    void table(){
        cout<<"\n Enter numbers :";
        cin>>n;

        for( i=1;  i<=10;  i++){
            r=n*i;
            cout<<n<<"*"<<i<<"="<<r<<endl;
        }
    }


};
int main(){
    XYZ ob;
    ob.table();

return 0;
}