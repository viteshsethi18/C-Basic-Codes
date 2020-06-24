#include<iostream>
using namespace std;
class area
{
int side1,side2;
public:
area()
{
cout<<"Enter side1:";cin>>side1;
cout<<"Enter side2:";cin>>side2;
}
float calculate(int x)
{
return x*x;
}
float calculate(int l, int b)
{
return l*b;
}
float calculate(float b,float h)
{
return b*h/2;
}
void choice(){
char ch;
do
{
cout<<"1.Square\n2.Rectangle\n3.Triangle\n4.Exit\n";
cout<<"Enter choice:";
cin>>ch;
switch(ch)
{
case '1':cout<<"Area of Square "<<calculate(side1)<<endl;
break;
case '2':cout<<"Area of Rectangle "<<calculate(side1,side2)<<endl;
break;
case '3':cout<<"Area of Triangle "<<calculate(side1,side2)<<endl;
break;
case '4':break;
default :cout<<"Wrong input! "<<endl;break;
}
}while(ch!='4');
}};
int main()
{
area o;
o.choice();
return 0; 
}
