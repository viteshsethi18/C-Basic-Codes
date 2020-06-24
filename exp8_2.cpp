#include<iostream>
#include<fstream>
using namespace std;
class Residence
{
unsigned long int house_no,income;
string house_name;char house_type;
public:
void input()
{
cout<<"Enter House no. ";cin>>house_no;
cout<<"Enter House name ";cin>>house_name;
cout<<"Enter Income ";cin>>income;
assign();
}
void assign()
{
if(income>1000000)house_type='A';
else if(income>1000)
house_type='B';
else
house_type='C';
}
void output()
{
cout<<"House No. "<<house_no<<endl;
cout<<"House name "<<house_name<<endl;
cout<<"House type "<<house_type<<endl;
}
int house()
{
return house_no;
}
};
void add()
{
char ch='y';
while(ch=='y')
{
ofstream data("secret.dat",ios::app | ios::binary); 
if(!data)
{
cout<<"Can't create file !";
break;
}
data.seekp(0,ios::end);
Residence nw;nw.input();
data.write((char*)&nw,sizeof(nw));
data.close();
cout<<"Enter 'y' to continue adding records:";
cin>>ch;
}
}
void modify()
{
fstream data;
data.open("secret.dat");
if(!data)
cout<<"No file exists by this name!";
else
{
unsigned long int user_house_no;
cout<<"Enter the House no. of the record you wish to edit:";
cin>>user_house_no;
Residence nw;
while(data)
{
data.read((char*)&nw,sizeof(nw));
if(nw.house()==user_house_no)
{
data.seekp(-1*sizeof(nw),ios::cur);
break;
}}
nw.input();
data.write((char*)&nw,sizeof(nw));
}
}
void display()
{
ifstream data("secret.dat",ios::in | ios::binary);
time;
if(!data) 
cout<<"No file exists by this name!";
else
{
Residence nw;
while(data)
{
data.read((char*)&nw,sizeof(nw));
nw.output();
}
}
}
int main()
{
char ch;
cout<<"(1) Add Records.\n(2) Modify a Record.\n(3) Display Records.\n";
do
{
cout<<"\nEnter your choice ";cin>>ch;
switch(ch)
{
case '1': add(); break;
case '2': modify(); break;case '3': display();
break;
default : cout<<"\nUnknown input. Exiting.\n"; break;
}
}while(ch=='1'||ch=='2'||ch=='3');
}
