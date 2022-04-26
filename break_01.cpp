#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<10; i++){
       // cout<<i<<endl;    // output=  0 1 2
        if(i==2){
            break;
        }
        cout<<i<<endl; // output =  0 1
    }
    return 0;
}
