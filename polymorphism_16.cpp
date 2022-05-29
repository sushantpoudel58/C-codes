/* An educational system maintains a database of employees. The database is 
divided into A number of classes which defines a hierarchical structure. Specify
all the classes and defined function to create the database and retrieve 
individual information  required for each class. (incomplete)
*/
#include<iostream>
#include<process.h>
using namespace std;

class staf
{
    int code;
    char name[20];
    public:
    
    void getstaf()
    {
        cout<<"\n Enter the code and name:";
        cin>>code>>name;
    }
    void putdata()
    {
        cout<<"\n code"<<code<<"\n Name"<<name;
    }
};

class teacher:public staf
{
    char subject[20], pub[20];
    public:
    void getteacher()
    {
        cout<<"\n Enter the subject:";
        cin>>subject;
        cout<<"\n enter the publication:";
        cin>>pub;
    }
    void putteacher()
    {
        cout<<"\n subject"<<subject;
        cout<<"\n publication"<<pub;
    }
};
class typist:public staf
{
    int speed;
    public:
    void gettypist()
    {
        cout<<"\n Enter the speed :";
        cin>>speed;
    }
    void puttypist()
    {
        cout<<"\n speed"<<speed;
    }
};

class officer:public staf
{
    char grade;
    public:
    void getofficer()
    {
        cout<<"\n Enter the grade:";
        cin>>grade;
    }
    void putofficer()
    {
        cout<<"\n grade"<<grade;
    }

};
class regular:public typist
{
    int inc;
    public:
    void getregular()
    {
        cout<<"\n Enter the income:";
        cin>>inc;
    }
    void putregular()
    {
        cout<<"\n income"<<inc;
    }
};

class casual:public typists


int main(){
return 0;
}