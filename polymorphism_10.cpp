
#include<iostream>
using namespace std;

class sim{
    public:
    virtual void connect(){
        cout<<"inside connect";

    }
};
class aircg:public sim{
    public:
    void connect(){
        cout<<" in connected to aircg network";
    }
};
class ncellsim:public sim{
    public:
    void connect(){
        cout<<" in connected to ncell network";
    }
};
class mobile{
    public:
    static void insert(sim *s){
        (*s).connect();
    }
};

int main(){
    aircg air;
    ncellsim nsl;
    mobile::insert(&air);
    mobile::insert(&nsl);
return 0;
}