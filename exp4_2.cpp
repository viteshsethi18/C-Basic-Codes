#include<iostream>
using namespace std;
#define x 3
#define y 3
class matrix
{
int a[x][y];
public:
matrix operator +(matrix o2)
{
matrix t;
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
t.a[i][j]=o2.a[i][j]+a[i][j];
return t;
}
void get()
{
cout<<"Enter all elements of matix.\n";
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
{
cout<<"a["<<i<<"]["<<j<<"]:";cin>>a[i][j];
}
}
void print()
{
cout<<"Elements of matrix.\n";
for(int i=0;i<x;i++){for(int j=0;j<y;j++)
{
cout<<"a["<<i<<"]["<<j<<"]:";cout<<a[i][j]<<"\t";
}
cout<<endl;
}
}
};
int main()
{
matrix o1,o2,o3;
o1.get(); o2.get();
o3=o1+o2;
o3.print();
}
