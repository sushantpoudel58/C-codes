/* WAP in OOP, having two classes named as Fahrenheit and Cnetigrade;  Both  class has a member data F_degree  in 1st class,
and  C_deg  in  centigrade class with a input function to  supply temp. in specified unit 

Create a friend function to  convert  the both temperature  value total in Kelvin_unit and  display it*/

#include<iostream>
using namespace std;

class Centigrade;

class Fahrenheit
{
    float f_deg;

    public:
    void input()
    {
        cout<<"Enter temprature in Fahrenheit: ";
        cin>>f_deg;
    }

    friend void convert_to_Kelvin(Fahrenheit f, Centigrade c);
};

class Centigrade
{
    float c_deg;

    public:
    void input()
    {
        cout<<"Enter temprature in Celsius: ";
        cin>>c_deg;
    }

    friend void convert_to_Kelvin(Fahrenheit f, Centigrade c);
};

int main()
{
    Fahrenheit fahrenheit;
    Centigrade centigrade;

    fahrenheit.input();
    centigrade.input();

    convert_to_Kelvin(fahrenheit, centigrade);
    return 0;
}

void convert_to_Kelvin(Fahrenheit f, Centigrade c)
{
    float k1 =( 100 * (f.f_deg -32) / 180) + 273;
    float k2 = c.c_deg + 273;
    cout<<"Sum of the Temperature in kelvin: "<< k1 + k2 <<endl;

}
   