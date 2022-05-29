/* Function call by Reference ( Pass arguements  by address*/

#include<iostream>
using namespace std;

void swap(int* , int*);    //  function prototype

int main(){
    int m,n;
    m=44, n=55;
    cout<<" values of m and n , before calling function are :"<<m<<" "<<n <<endl;
    swap(m,n);
    cout<<" values of m and n , after calling function are :"<<m<<" "<<n<<endl;
return 0;
}

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<" The values within function are:"<<x<<" "<<y;
}