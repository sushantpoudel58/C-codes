/* */

#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    int inches;
    public:
    // requuired constructors

    Distance(){
        feet=0;
        inches=0;

    }
    Distance(int f, int i){  // output operator
    feet=f;
    inches=i;  // keyword
    }  // return type

    friend ostream &operator<<(ostream &output, const Distance &D){
        output<<"F:"<<D.feet<<"I:"<<D.inches;
        return output;
    }
    friend istream &operator>>(istream &input, Distance &D){
        input>>D.feet>>D.inches;
        return input;
    }

};
int main(){
    Distance D1(11,10), D2(5,11),D3;
    cout<<"Enter the vlaue of object:"<<endl;
    cin>>D3;   // input the value of object D3 i.e. calls input operator>>(istream) function
    cout<<"First Distance:"<<D1<<endl;  // ostream operator<<(ostream) function called
    cout<<"Second Distance:"<<D2<<endl;  // ""
    cout<<"Third Distance:"<<D3<<endl;  // ""
return 0;
}