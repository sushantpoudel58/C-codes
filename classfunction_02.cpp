#include<iostream>

using namespace std;

class student{

    public:
    // data //properties
    int id;
    string name;
    float height;

    //function
    void printPersonDetails(){
        cout<<"ID is: "<<this->id<<". Name:"<< this->name<< " .Height:"<<this->height;
    }
};

int main(){
    student ob;
    ob.id=40;
    ob.name="Sushant";
    ob.height=5.3;

    ob.printPersonDetails();

    return 0;
}