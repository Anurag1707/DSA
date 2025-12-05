#include<iostream>
using namespace std;
struct stack{
    int data;
    stack *next;
};
stack *top, *temp;
void init()
{
    top=temp=NULL;
}

void push(int x)
{
    temp=new stack;
    if(temp==NULL)
    return;
    temp->data=x;
    temp->next=top;
    top=temp;
}

int pop()
{
    int x;
    if(top==NULL)
    return 0;
    x=top->data;
    temp=top;
    top=top->next;
    temp->next=NULL;
    delete temp;
    return x;
}

int main()
{
    init();
    string str;
    string post="";
    cin>>str;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('){
            push(str[i]);
        }
        else if( (str[i]>='A' && str[i]<='Z') || (str))
    }


}