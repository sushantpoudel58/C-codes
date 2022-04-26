/* Q.>   Define a multipath inheritance  structure in which the class master deriives information from both account
    and admin classes which in turn derive information from the  class person. Define  all four classes and a write a
    program to create, update and  display information contained in master objects    */

#include <iostream>
//#include <process.h>
#include<conio.h>

using namespace std;

class person
{
protected:
    char name[20];
    int code;

public:
    void getcode()
    {
        cout << "\n Enter the code :";
        cin >> code;
    }
    void getname()
    {
        cout << "\n The the name:";
        cin >> name;
    }
};

class account : virtual public person
{
protected:
    int pay;

public:
    void getpay()
    {
        cout << "\n Enter the payment :";
        cin >> pay;
    }
};

class admin : virtual public person
{
protected:
    int exp;

public:
    void getexp()
    {
        cout << "\n Enter the exercise:";
        cin >> exp;
    }
};

class master : public account, public admin
{
public:
    void getdata()
    {
        getcode();
        getname();
        getpay();
        getexp();
    }
    void update()
    {
        int c;
        cout << "\n You want to update \n1.code\n2.name\n3.payment\n4.experience";
        cout << "\n Enter your choice no. :";
        cin >> c;

        switch (c)
        {
        case 1:
            getcode();
            break;
        case 2:
            getname();
            break;
        case 3:
            getpay();
            break;
        case 4:
            getexp();
            break;
        default:
            cout << "\n Invalid choice";
        }
    }
    void putdata()
    {
        cout << "\n Details ";
        cout << "\n Code " << code << "\n Name" << name;
        cout << "\n Payment " << pay << "\n Experience" << exp;
        cout << "\n Press any key 2 continue";

        
    }
};

int main()
{
    int ch;
    master m;
    while (1)
    {
        cout << "\n MENU\n1.Create\n2.Update\n3.Display\n4.Exit";
        cout << "\n Enter your choice";
        cin >> ch;

        switch (ch)
        {
        case 1:
            m.getdata();
            break;
        case 2:
            m.update();
            break;
        case 3:
            m.putdata();
            break;
        case 4:
            exit(0);
        default:
            cout << "\n Invalid choice";
        }
    }
    getch();
    return 0;
}
