#include<iostream>
using namespace std;
class Student
{
private:
int sapid,eng,chem,phy,math,isf,pds;
char name[40];
public:
void get_marks()
{
cout<<"Name:";
fgets(name,39,stdin);
//cin>>name[40];
cout<<"\nSap Id:";
cin>>sapid;
cout<<"\nEnter the marks\n";
cout<<"\nEnglish:";
cin>>eng;
cout<<"\nMathematics:";
cin>>math;
cout<<"\nChemistry:";
cin>>chem;
cout<<"\nPhysics:";
cin>>phy;
cout<<"\nCloud:";
cin>>isf;
cout<<"\nProgramming and Data Structures:";
cin>>pds;
}
friend class access;
};
class access
{
//private:int total=x.eng+x.math+x.isf+x.phy+x.chem+x.pds;
public:
void details(Student &x)
{
cout<<"Name entered:"<<x.name<<"\nSap Id entered:"<<x.sapid;
}
void marks(Student &x)
{
cout<<"\nTotal marks="<<x.eng+x.math+x.isf+x.phy+x.chem+x.pds;
}
void average(Student &x)
{
cout<<"\nAverage Marks:"<<(float)(x.eng+x.math+x.isf+x.phy+x.chem+x.pds)/6;
}
};
int main()
{
Student stu;
access acc;
stu.get_marks();
acc.details(stu);
acc.marks(stu);
acc.average(stu);
return 0;
}
