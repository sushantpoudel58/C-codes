// inline function related program


#include<iostream>

using namespace std;

class add{
    int x,y;
    public:
    
  inline void sum(int a, int b);
};

/*inline*/void add::sum(int a, int b){
    x=a;
    x=b;
    cout<<"\n sum="<<x+y;
}

int main(){
    add ob;
    ob.sum(4,5);
}