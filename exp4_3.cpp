#include<iostream>
using namespace std;
class Temperature
{
float c;
public: Temperature(float a=-40.0)
{
c=a;
}
virtual float calculate()
{
cout<<c<<"C converted to "<<9/5.0*c+32<<"F\n";
return (9.0/5*c+32);
}
};
class Temp:public Temperature
{
float f;
public:
float calculate()
{
f=Temperature::calculate(a);
cout<<f<<"F converted to "<<(5/9.0*(f-32)+273.15)<<"K\n";
return 0;
}
};
int main()
{
Temp o; Temperature *t=&o;
t->calculate();
}
