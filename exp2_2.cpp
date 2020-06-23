#include<iostream>
using namespace std;
class queuea
{
private:
int num,val,i,front=-1,rear=-1;
int MAX=100;
int queue[100];
public:
void insert()
{
cout<<("\n Enter the number to be inserted");
cin>>num;
if(rear== MAX-1)
cout<<("\n OVERFLOW");
else
if(front==-1 && rear==-1)
{
front =0;
rear=0;
}
else
rear++;
queue[rear]=num;
}
int delete_element()
{
if(front==-1 || front>rear)
{
cout<<("UNDERFLOW");
return -1;
}
else
{
val=queue[front];
front++;
if(front>rear)
{
front=-1;
rear=-1;
}
return val;
}
}
int peek()
{
if(front==-1 || front>rear)
{
cout<<("Queue is empty");
return -1;
}
else
{
return queue[front];
}
}
void display()
{
cout<<("\n");
if(front==-1||front>rear)
cout<<("Queue is empty");
else
{
for(i=front; i<=rear;i++)
cout<<queue[i];
}
}
};
int main()
{
queuea obj;
int ch,val;
do
{
cout<<("Main menu \n");
cout<<("1. Insert an element \n");
cout<<("2. Delete an element \n");
cout<<("3. Peek \n");
cout<<("4. Display the queue \n");
cout<<("5. Exit \n");
cout<<(" Enter your choice \n");
cin>>ch;
switch(ch)
{
case 1:
obj.insert();
break;
case 2:
val=obj.delete_element();
if(val != -1)
{
cout<<("\n The number deleted is: ");
cout<<val;
}
break;
case 3:
val=obj.peek();
if(val !=-1)
{
cout<<("The first value in the queue is: \n");
cout<<val;
}
break;
case 4:
obj.display();
break;
default:
cout<<("Wrong choice \n");
}
}
while(ch!=5);
return 0;
}
