/*2. define a hybrid inhertance structures which will print the result as a cumulative score from test and sports.
Each class should have its own constructors */

#include <iostream>
//#include<conio.h>
using namespace std;

class student
{
protected:
    char name[20];
    int code;

public:
    student()
    {
        cout << "\n enter teh code and name";
        cin >> code >> name;
    }
};

class test : public student
{
protected:
    int score;

public:
    test()
    {
        cout << "\n enter the score in test";
        cin >> score;
    }
};

class sports
{
protected:
    int score;

public:
    sports()
    {
        cout << "\n enter the score in sports";
        cin >> score;
    }
};

class total : public test, public sports
{
    int tot;

public:
    void add()
    {
        tot = test::score + sports::score;
    }

    void display()
    {
        cout << "\n code=" << code << "\n name" << name;
        cout << "\n total=" << tot;
    }};

    int main()
    {
        
        total t;
        t.add();
        t.display();
        //getch();
        return 0;
    }

