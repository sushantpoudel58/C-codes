#include<iostream>
using namespace std;

class animal{
    public:
    virtual void walk(){
        cout<<"\n inside animal work";

    }
};
class dog:public animal{
    public:
    void walk(){
        cout<<"\n inside dog walk";

    }
};
class cat:public animal{
    public:
    void walk(){
        cout<<"\n inside cat walk";
    }
};
void play(animal *a){
    (*a).walk();           // a= &c
}
int main(){
    cat c;
    dog d;
    // animal *a
    //  animal *an
    // a= &c
    // an= &d
    //a->walk(); // base class object pointer calls derive class cat member function
    // an->walk(); // ""                      "             "    dog       "  "

    play(&c);
    play(&d);

return 0;
}