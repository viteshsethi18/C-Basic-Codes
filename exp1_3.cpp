#include<iostream>
using namespace std;
class numb
{
public :
int n,i=0;
int num[50];
public :
void number(int k)
{
int m=k;
while(k>0)
{
num[i]=k%2;
k=k/2;
i++;
}
for(int j=i-1;j>=0;j--)
cout<<num[j];
}
};
int main()
{
numb s;
int n;
cout<<"enter number";
cin>>n;
s.number(n);
return 0;
}
