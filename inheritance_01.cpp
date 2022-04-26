// Inheretance  

// Private derivation :-

#include<iostream>
using namespace std;

class base{
    int x;
    public:
    int y;

    int getPut(){
        cout<<"x,y,z are ?";
        cin>>x>>y>>z;
        
        return x;
    }
    protected:
    int z;
    
};
class pvtdrv:private base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

  /*  int dispPvt(){
        a=x;
        return a;
    }*/
    int dispProt(){
        b=y;
        return b;
    }
    int dispPub(){
        c=z;
        return c;
    }

};
int main(){
    pvtdrv ob;

    //cout<<" Private values from base"<<ob.getPut();
   // cout<<"Pvt  data from pvtdrv"<<ob.dispPut();
    cout<<"Protected data from Pvtdrv"<<ob.dispProt();
    cout<<"public="<<ob.dispPub();
return 0;
}