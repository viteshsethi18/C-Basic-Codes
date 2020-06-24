#include<iostream>
using namespace std;
template<class t>
class stack
{
public:
    t *a;
    int top,i,size;
    stack(int siz)
    {
        a=new t[siz];
        size=siz;
        top=-1;
    }
                       
    void push(t ele)
    {
        if(top!=size-1){a[++top]=ele;}
    }
               
    t pop()     
    {
          return(a[top--]);
    }
                       
    void print()
    {
        for(i=0;i<top;i++)
            cout<<" "<<a[i];
                               
        cout<<"\n";
    }
               
};
                   
int main()
{   
    int i,ele;
    float el;
    char e;
    cout<<"\n\nINTEGER STACK:\n";
    stack<int> st1(10);
    for(i=1;i<=5;i++)
    {
        cout<<"\n\tpushed item:"<<i;
        st1.push(i);
    }
    cout<<"\n\n";
    for(i=0;i<5;i++)
    {
        ele=st1.pop(); 
        cout<<"\t\npoped Item: "<<ele;
    }
    cout<<"\n\nFLOAT STACK:\n";
    stack<float> st2(10);
    for(i=1;i<=5;i++)
    {
        el=(.05*i);
        cout<<"\n\tpushed item:"<<el;
        st2.push(el);
    }
    cout<<"\n\n";
    for(i=0;i<5;i++)
    {
        el=st2.pop(); 
        cout<<"\t\npoped Item: "<<el;
    }
    cout<<"\n\nCHARACTER STACK:\n";
    stack<char> st3(10);
    for(i=0;i<5;i++)
    {
        e=65+i;
        cout<<"\n\tpushed item:"<<e;
        st3.push(65+i);
    }
    cout<<"\n\n";
    for(i=0;i<5;i++)
    {
        e=st3.pop(); 
        cout<<"\t\npoped Item: "<<e;
    }
    cout<<"\n";
    return(1);
}
