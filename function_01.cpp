#include<iostream>

using namespace std;

void printName();
int sum(int a, int b);  // parameter

int main(){
    printName();

    return 0;
}

void printName(){
    cout<<"The sum is "<<sum(10,20);
}
int sum(int a, int b){
    return a+b;
}