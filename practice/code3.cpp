#include<iostream>
using namespace std;
// #define max 5
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
 temp->next= NULL;
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
   cout<<pop()<<endl;
}