#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void all_zero( );
void roots(double a, double b, double c);
void check(int a, int b, int c)
{
if((b*b-4*a*c)<0)
{
cout<<"Throwing the Exception."<<endl;
throw;
}
}
void my_sqrt()
{
cout<<"Exception caught inside my_sqrt(). Roots are not real.\nTerminate handler called."<<endl;
abort();
}
void all_zero( )
{
exit(1);
}
void roots(double a, double b, double c)
{
double x1, x2; // The two roots
double temp;
if( !(a == 0 && b == 0 && c == 0) )
{
if(a != 0)
{
temp = b*b - 4*a*c;
if(temp >= 0)
{
// Two roots
x1 = ( -b + sqrt(temp))/2*a;
x2 = ( -b - sqrt(temp))/2*a;
cout << "The two roots are: " << x1 << " and " << x2 << endl;
}
else
{
cout << "Square root of negative values is not defined \n";
exit(1);
}
}
else
{
cout << "Division by zero, not defined \n";
exit(1);
}
}
else
{
all_zero( );
}
}
int main( )
{
set_terminate(my_sqrt);
double a, b, c; // coefficient of ax^2 + bx + c = 0
cout << "Enter the three coefficients of ax^2 + bx + c = 0 \n";
cin >> a >> b >> c;
check(a,b,c);
roots(a, b, c);
return 0;
}
