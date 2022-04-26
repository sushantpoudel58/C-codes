// WAP in OOP to display factorial of a supplied number  and add a question to ask one more or not


#include<iostream>

using namespace std;

class fct{
    long int i,f;
    public:
    void fact(){
        f=1;
        cout<<"\n Enter a number :";
        cin>>i;
        for(int x=1; x<=i; x++){
            f=f*x;
        }
        cout<<"factorial of "<<i<<"="<<f;
        
    }
};
int main(){
    char op;
    fct ob;
    while(1){
        ob.fact();
        cout<<"\n Do you want more(Y/y) ?";
        cin>>op;

        if(op=='Y'||op== 'y')
        continue;
        else
        exit(0);

        return 0;
    }
}