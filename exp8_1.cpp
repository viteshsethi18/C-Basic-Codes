#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
string content,word,temp;
int count=0;
ofstream first;
first.open("exp8.txt",ios::out);
if(!first)
{
cout<<"Can't open file !";
}
else
{
cout<<"Enter what you want to write in the file. Write 'EXIT' to exit writing.\n\n";
while(first)
{
getline(cin,content);
if(content=="EXIT") break;
first<<content<<endl;}
cout<<"\nEnter the word to search:";
cin>>word;
ifstream second;
second.open("exp8.txt",ios::in);
while(second)
{
second>>temp;
if(word==temp)count++;
temp="";
}
cout<<"No. of words matching = "<<count<<endl;
second.close();
}
first.close();
}
