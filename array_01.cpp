#include<iostream>

using namespace std;

int main(){
    // Array : You can store many values for same type

    float a[5];
    // store
    for(int i=0; i<5; i++){
        cout<<"Enter value at index "<<i<<": ";
        cin>>a[i];
    }

    //display
    for(int i=0; i<5; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}