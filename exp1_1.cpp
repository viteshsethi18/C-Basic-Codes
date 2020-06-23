#include<iostream>
#include<math.h>
using namespace std;
class perimeter
{
public :
int rect()
{
int b = 314/2;
int peri;
peri=2+b;
return peri;
}
int circle()
{
float peri;
int radius;
radius=sqrt(314/3.14);
peri=2*3.14*radius;
return peri;
}
int square()
{
float peri;
float side;
side=sqrt(314);
peri=4*side;
return peri;
}
int triangle()
{
float hyp;
float peri;
float base=(314*2)/4;
hyp=sqrt((base*base)+16);
peri=base+hyp+4;
return peri;
}
};
int main()
{
float a,b,c,d;
perimeter obj;
a=obj.rect();
b=obj.circle();
c=obj.square();
d=obj.triangle();
if(a>b && a>c && a>d)
cout<<"maximum is rectangle\n"<<a;
if(b>a && b>c && b>d)
cout<<"maximum is circle\n"<<b;
if(c>a && c>b && c>d)
cout<<"maximum is square\n"<<c;
else
cout<<"maximum is triangle\n"<<d;
cout<<endl;
if(a<b && a<c && a<d)
cout<<"minimum is rectangle\n"<<a;
if(b<a && b<c && b<d)
cout<<"minimum is circle\n"<<b;
if(c<a && c<b && c<d)
cout<<"minimum is square\n"<<c;
return 0;
}
