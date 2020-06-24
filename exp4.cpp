#include<iostream>
using namespace std;
class student 
{
public:
float z,m;
char name[20];
int rollno;
char gender;
void studentdetails(void);
void display(void);
int getrollno()
{
return rollno;
}
};

void student::studentdetails()
{
cout<<"enter name of the student"<<endl;
cin>>name;
cout<<"enter roll number"<<endl;
cin>>rollno;
cout<<"enter the gender"<<endl;
cin>>gender;
}

void student::display()
{
cout<<"\nstudent name"<<endl;
puts(name);
cout<<"\nroll number is:"<<rollno;
cout<<"\ngender:"<<gender;
}

class internal: virtual public student
{
public:
int i,a;
float marks=0,total=0;
void imarks()
{
cout<<"enter number of subjects"<<endl;
cin>>a;
for(i=1;i<=a;i++)
{
cout<<"enter marks in subject";
cin>>marks;
total=total+marks;
}
z=((total*100)/(a*100))*0.4;
}
};
class external: virtual public student
{
public:
int j,a;
float marks=0,total=0;
void emarks()
{
cout<<"enter number of subjects"<<endl;
cin>>a;
for(j=1;j<=a;j++)
{
cout<<"enter marks in subject";
cin>>marks;
total=total+marks;
}
m=((total*100)/(a*100))*0.6;
}
};
class result: public internal,public external
{
public:
void getresult()
{
imarks();
emarks();
}
void disresult()
{
float v;
cout<<"\ninternal marks is"<<z;
cout<<"\nexternal marks is"<<m;
v=z+m;
cout<<"\ntotal ="<<v;
}
};
int main()
{
result obj1;
obj1.studentdetails();
obj1.getresult();
obj1.display();
obj1.disresult();
return 0;
}
