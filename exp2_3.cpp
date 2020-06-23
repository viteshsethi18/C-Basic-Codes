#include<iostream>
using namespace std;
struct stack
{
int data;
struct stack *next;
};
struct stack *top=NULL;
class stacks
{
private :
struct stack *ptr;
public:
struct stack *push(struct stack *top,int val)
{
ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->data=val;
if(top==NULL)
{
ptr->next=NULL;
top=ptr;
}
else
{
ptr->next=top;
top=ptr;
}
return top;
}
struct stack *display(struct stack *top)
{
ptr=top;
if(top==NULL)
cout<<"STACK IS EMPTY\n";
else
{
while(ptr!=NULL)
{
cout<<ptr->data;
cout<<endl;
ptr=ptr->next;
}
}
return top;
}
struct stack *pop(struct stack *top)
{
ptr=top;
if(top==NULL)
cout<<"Stack UNDERFLOW \n";
else
{
top=top->next;
cout<<"The value being deleted is :\n";
cout<<ptr->data;
free(ptr);
}
return top;
}
int peek(struct stack *top)
{
if(top==NULL)
return -1;
else
return top->data;
}
};
int main()
{
stacks obj;
int val,ch;
do
{
cout<<"*******MAIN MENU*********";
cout<<"\n 1. PUSH";
cout<<"\n 2. POP";
cout<<"\n 3. PEEK";
cout<<"\n 4. DISPLAY";
cout<<"\n 5. EXIT";
cout<<"\n Enter your option ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the number to be pushed in stack ";
cin>>val;
top=obj.push(top,val);
break;
case 2:
top=obj.pop(top);
break;
case 3:
val=obj.peek(top);
if(val!=-1)
{
cout<<("The value at the top of stack is :");
cout<<val;
}
else
cout<<("Stack is empty");
break;
case 4:
top=obj.display(top);
break;
default:
cout<<("Wrong choice");
}
}
while(ch!=5);
return 0;
}
