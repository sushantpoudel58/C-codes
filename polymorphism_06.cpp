//  ILLUSION / CONCLUSION  creation example

#include<iostream>
using namespace std;

class Value{
    protected:
    int val;
    public:
    void set_values(int a){
        val=a;
    }
};

class Cube:public Value{
    public:
      int cubes(){
        return(val*val*val);
    } 
};
int main(){
    Cube cb;
    Value*ptr=&cb;
    ptr->set_values(10);  // calls set_values function from cube class since ptr is pointer
    
    cout<<"The cube of 10 is:"<<cb.cubes()<<endl;

return 0;
}