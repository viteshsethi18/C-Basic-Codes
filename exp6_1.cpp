#include<iostream>
using namespace std;
class temperature
{
public:
float a;
temperature(float k=0.0)
{
a=k;
}
virtual void calculate(){}
};
class temp : public temperature
{
public:
float b,c;
temp(float k):temperature(k){}
void calculate()
{
c=a-273.15;
cout<<"temp in celsius ="<<c<<endl;
b=((a-273.15)*1.8)+32;
cout<<"temp in fahrenheit ="<<b<<endl;
}
};
int main()
{
float k;
cout<<"enter temp in kelvin:";
cin>>k;
temp t(k);
temperature &t1 = t;
t1.calculate();
return 0;
}
