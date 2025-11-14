#include<iostream>
using namespace std;
#define max 5
struct stack
{
 int data[max];
 int top;
};
stack s,*p;
void init(){
   p = &s;
   p->top=1;
}
int empty()
{
    if(p->top==-1)
    return 1;
    else
    return 0;
}

int full()
{
    if(p->top==max-1)
    return 1;
    else
    return 0;
}
void push(int x)
{
    if(full()) return;
    p->top ++;
    p->data[p->top]=x;
}

int  pop()
{
    int x;
    if(empty()) return 0 ;
    x=p->data[p->top];
    p->top --;
    return x;
}

int main()
{
    init();
    push(10);
    push(20);
    push(30);
    cout<<"pop is  " <<pop()<<endl;
    cout<<"pop is  " <<pop()<<endl;
    cout<<"pop is  " <<pop();
}