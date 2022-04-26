//

#include<iostream>
using namespace std;

class ClassA{
    public:
    int a;
};
class ClassB: public ClassA{
    public:
    int b;
};
class ClassC:public ClassA{
    public:
    int c;
};
class ClassD:public ClassB,public ClassC{
    public:
    int d;
};
int main(){
    ClassD obj;

    //obj.a=10;     // Statement 1, Error occur i.e.  which   a   from classB or classC
    //obj.a=100;    //  Statement 2; Error occur

    obj.ClassB::a=10;
    obj.ClassC::a=100;
    obj.b=20;
    obj.c=30;
    obj.d=40;

    cout<<"\n A from ClassB:"<<obj.ClassB::a;
    cout<<"\n A from classC"<<obj.ClassC::a;
    cout<<"\nB:"<<obj.b;
    cout<<"\nC:"<<obj.c;
    cout<<"\nD:"<<obj.d;
return 0;
}



/* In the above example, both classB and class C  inherit classA,   they both have single copy of classA. */