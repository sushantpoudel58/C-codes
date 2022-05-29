/* constructor overloading in polymorphism  */

#include<iostream>
#include<string.h>
using namespace std;

class student
{
    int roll;
    char name[25];
    float marks;
     
     public:
      student(int R, float Mks, char Nm[])  // constructor 1
      {
          roll=R;
          strcpy(name,Nm);
          marks=Mks;
      }
      student(char name[], float marks, int roll)  // constructor 2
      {
          roll=roll;
          strcpy(name, name);
          marks=marks;
      }
      student(int roll, char name[], float marks)  // contructor 3
      {
          this->roll=roll;
          strcpy(this->name, name);
          this->marks=marks;

      }
      void display()
      {
          cout<<"\n roll:"<<roll;
          cout<<"\n\t name:"<<name;
          cout<<"\n\t marks:"<<marks;
      }
};
int main(){
    student s1(1,89.63,"nirajbaula");
    student s2("niraj_chor", 78.53,2);
    student s3(3, " Anmol KC", 68.94);

    cout<<"\n\n details of student 1:";
    s1.display();
    cout<<"\n\n details of student 2:";
    s2.display();
    cout<<"\n\n details of student 3:";
    s3.display();
return 0;
}