// Accessing  /  calling function //
// functionwithout_oop_01
/* Define a function  bigger()  to find the biggest number among two numbers.  WAP that uses this function to find the biggest 
number  among three numbers */

#include<iostream>
using namespace std;

int bigger(int m, int n)      // function header
{
    if(m>n)
    return (m);
    else
    return(n);

}
int main()
{
    int a,b,c,d,e;
    cout<<" Enter any three numbers :";
    cin>>a>>b>>c;

    d=bigger(a,b);                       //  function call
    e=bigger(c,d);                       //    "        "
    cout<<" the biggest number is:"<<e;   // biggest value assigned into  'e'

return 0;
}