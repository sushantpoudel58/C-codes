/* In  a class distance is measured in feet and inches unit. Use operator overloading, + operator for adding two distancs and < 
operator */

#include<iostream>
using namespace std;

class distance
{
    int feet,inch;
    public:
    void getdata(){
        cout<<"\n Enter the feet and inches";
        cin>>feet>>inch;
    }
    void display(){
        cout<<feet<<"feet"<<inch<<"inches";
    }
    friend distance operator+(distance, distance);
    friend void operator<(distance,distance);
};
distance operator+(distance d1, distance d2)
{
     distance t;
    int a;
    a=d1.inch+d2.inch;
    t.inch=a%12;
    t.feet=(a/12)+d1.feet+d2.feet;
    return t;
}

void opertor<(distance d1, distance d2)
{
    if(d1.feet<d2.feet)
    cout<<"\n 1st distance is less than 2nd";
    elseif(d2.feet<d1.feet)
    cout<<"\n 2nd distance is less than 1st";
    else{
        if(d1.inch<d2.inch)
        cout<<"\n 1st distamnce is less than  2nd";
        else if(d2.inch<d1.inch)
        cout<<"\n 2nd distance is less than  1st";
        else
        cout<<"\n Both distances are same";
    }
}
int main(){
    distance dist1,dist2,dist3;
    cout<<"\n Enter the 1st distance:";
    dist1.getdata();
    cout<<"\n Enter the 2nd distance:";
    dist2.getdata();
    cout<<"\n Comparing two distances";
    dist1<dist2;
    cout<<"\n Sum distance \n";
    dist3=dist1+dist2;
    dist3.dispay()
    
return 0;
}