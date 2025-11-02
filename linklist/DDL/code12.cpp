#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next, *prev;
};
node *first,*temp,*ttemp,*p;
int create_first(int x)
{
  first=new node;
  first->prev=NULL;
  first->data=x;
  first->next=NULL;
}
int add_before_first()
{
    temp=new node;
    cout<<"enter first element u want ";
    cin>>temp->data;
    temp->prev=NULL;
    temp->next=first;
    first->prev=temp;
    first=temp;
}
int addnode(int x)
{
  temp=first;
  while(temp->next!=NULL){
    ttemp=temp;
    temp=temp->next;
  }
  p=new node;
  temp->next=p;
  p->data=x;
  p->prev=ttemp;
  p->next=NULL;
}

int display()
{
  temp=first;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
int main(){
  create_first(10);
  addnode(20);
  addnode(30);
  add_before_first();
  display();
}