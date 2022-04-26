// WAP in OOP to display the numbers divisible by 7 from 1 to 100

#include<iostream>

using namespace std;

class dvt{
    
    int i;
    public:
    void display(){
        for(i=1; i<100; i++){
            if(i%7==0){
                cout<<i<<"\t"<<endl;
            }
        }
    }




};

int main(){
    dvt ob;
    ob.display();

    return 0;
}
