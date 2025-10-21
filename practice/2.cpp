#include<iostream>
using namespace std;
struct node
{
   int data;
   node *next;
};
node *first, *temp, *ttemp, *p;
int init()
{
  first=ttemp=temp=p=NULL;
}
int create_first(int x)
{
    first=new node;
    first->data=x;
    first->next=NULL;
}
int addnode(int x)
{
  temp=first;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  p=new node;
  p->data=x;
  p->next=NULL;
  temp->next=p;
}

int display()
{
  temp=first;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
int main()
{
    init();
    create_first(20);
    addnode(50);
    display();
}