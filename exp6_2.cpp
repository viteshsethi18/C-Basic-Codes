#include<iostream>
using namespace std;
class temperature 
{
public:
float a1;
temperature(float a=0.0)
{
a1=a;
}
virtual void calculate(){}
};
class fahrenheit:public temperature
{
public:
float f;
fahrenheit(float a):temperature(a){}
void calculate()
{
f = (a1*1.8)+32;
cout<<"temp in fahrenheit:"<<f<<endl;
}
};
class kelvin:public temperature
{
public:
float k;
kelvin(float a):temperature(a){}
void calculate()
{
k=a1 + 273.15;
cout<<"temp in kelvin:"<<k<<endl;
}
};
int main()
{
float a;
cout<<"enter temp in celsius:";
cin>>a;
fahrenheit f(a);
kelvin k(a);
temperature &t1=f;
f.calculate();
temperature &t2 = k;
k.calculate();
return 0;
}

