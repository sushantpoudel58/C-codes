// WAP in OOP to display factorial of a supplied number 

#include<iostream>

using namespace std;

class fact{
    int n, fact,i;
    //char y,n;

    public:
    void get_data(){
        cout<<" Enter the number whose factorial is to be determined:";
        cin>>n;
    }
    void display(){
        fact=1;
        for(i=n; i>=0; i--){
            fact=fact*i;
        }
        cout<<"\ the factorial is : "<<fact;
        //cout<<"\n Do you want more ?";
        //cout<<"\n press y for yess and  n for no ";
        //cin>>y>>n;

    }

    
    
};

int main(){
    fact ob;
    ob.get_data();
    ob.display();
     return 0;
}