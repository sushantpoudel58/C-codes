#include<iostream>

using namespace std;

class calcInterest{
    private:
    float p, t, r;
    float i;
    public:
    void set_data(){
        cout<<"\n Enter the principle amount:";
        cin>>p;
         cout<<"\n Enter  time:";
        cin>>t;
         cout<<"\n Enter  rate:";
        cin>>r;
        
    }
    void calcInterest(){
        i=(p*t*r)/100;
    }
    void output();
};

void calcInterest::output(){
    cout<<"p="<<p<<"\n t="<<t<<"\nrate:"<<r;
    cout<<" calculated interest="<<i;
}

int main(){
    calcInterest ob;
    ob.set_data();
    ob.calcInterest ob;
    ob.output();

    return 0;

}