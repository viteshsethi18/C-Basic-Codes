#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class factorial{
public:
int fact(int &n){
int m= n-1;
if(n>1) return n*fact(m);
else return 1;
}
};
int main(){
factorial fn;
int x;
cout<<"Enter a number to compute Factorial \n ";
cin>>x;
cout<<"Factorial of number is "<<fn.fact(x)<<endl;
return 0;
}
