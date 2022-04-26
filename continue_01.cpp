#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<10; i++){
        //cout<<i<<endl; // output= 0 1 2 3 4 5 6 7 8 9
        if(i==2){
            continue;
        }
        cout<<i<<endl; // output= 0 1   3 4 5 6 7 8 9
    }
    return 0;
}