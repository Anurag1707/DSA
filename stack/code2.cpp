#include<iostream>
using namespace std;
#define max 5
struct stack
{
    int data[max];
    int topA,topB; 
};
stack *p,s;
void init()
{
    p = &s;
    p->topA=-1;
    p->topB=max;
}
int emptyA()
{
    if(p->topA==-1)
    return 1;
    else 
    return 0;
}
int emptyB()
{
    if(p->topB==max)
    return 1;
    else
    return 0;
}
int fullAB()
{
    if(p->topA+1==p->topB)
    return 1;
    else
    return 0;
}
void pushA(int x)
{
    p->topA++;
    p->data[p->topA]=x;
}
void pushB(int x)
{
    if(fullAB()) return;
    p->topB--;
    p->data[p->topB]=x;
}
int popA()
{
 int x;
 if(emptyA()) return 0;
 x=p->data[p->topA];
 p->topA--;
 return x;
}
int popB()
{
 int x;
 if(emptyB()) return 0;
 x=p->data[p->topB];
 p->topB++;
 return x;
}
int main()
{
    init();
    pushA(10);
    pushA(20);
    pushB(40);
    pushA(30);
    pushB(50);
  
    cout<<popA()<<endl;
    cout<<popA()<<endl;
    cout<<popA()<<endl;
    cout<<popB()<<endl;
    cout<<popB();

}