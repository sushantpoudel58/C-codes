/* Exception handling with multiple throw block and  single catch block*/

#include<iostream>
using namespace std;

int main(){
    int p,c,m,err=0;
    string name;
    do
    {
        try    // usin g try block to check error
        {
            {
                cout<<"Enter student name:";
                cin>>name;
                cout<<"Enter physics marks:";
                cin>>p;

                if(!(p>=0 && p<=100) )  // checking that marks entered is valid or not
                {
                    throw(p);         // using throw block to transfer error to catch block
                }
                cout<<"Enter chemistry marks:";
                cin>>c;
                if(!(c>=0 && c<=100))
                {
                    throw(c);
                }
                cout<<"Enter math marks :";
                cin>>m;
                if(!(m>=0 && m<=100 ))  // checking that marks entered is valid or not
                {
                    throw(m);  // using throw block to transfer error to catch  block
                }
                err=0;    // if all the conditions sre false then value error variable is 0


            }
        }
        catch(int e)
        {
           cout<<" Invalid marks "<<endl;  // showing  eror
           err=1;  // changing  value of variable to retake input
        }
        
    }while(err);  // it takes input all inputs are valid
    cout<<" \n name:"<<name<<"Physics marks:"<<p<<"Chemistry marks:"<<c<<"Math marks:"<<m;
    cout<<"\n Total marks:"<<p+c+m;
return 0;
}