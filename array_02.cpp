/* WAP that reads mark's percenteage in an examination of 10 students. Calculate and display the 
average percenteage  and deviation percentage from average of each student .*/

#include<iostream>

using namespace std;

int main(){
    float marks[10],avg,dev,sum=0;
    int i;
    cout<<"Enter percentage of 10 students:"<<endl;

    for(i=0; i<10; i++){
        cout<<i+1<<"th value:";
        cin>>marks[i];
        sum=sum+marks[i];

    }
    avg=sum/10;
    cout<<endl<<"Average marks is :"<<avg;
    cout<<endl<<"Deviation of each student from average:";

    for(i=0; i<10; i++){
        dev=marks[i]-avg;
        cout<<endl<<"marks"<<marks[i]<<"Deviation:"<<dev;
    }
}