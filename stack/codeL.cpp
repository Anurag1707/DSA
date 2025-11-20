#include<iostream>
using namespace std;
struct Lstack
{
    int data;
    Lstack *next;
};
Lstack *top, *temp;
void init()
{
    top=temp=NULL;
}
void push(int x)
{
    temp=new Lstack;
    if (temp==NULL)
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
    temp->next;
    delete temp;
    return x;
}

int main(){
    init();
    push(10);
    push(20);
    push(30);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop();
}
