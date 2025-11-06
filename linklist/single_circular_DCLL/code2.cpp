#include<iostream>
using namespace std;
struct DCLL
{
 int data;
 DCLL *next, *prev;
};
DCLL *first, *temp, *ttemp, *p;
void create_first()
{
    first =new DCLL;
    first->prev=first->next=first;
    cin>>first->data;
}

void add_node()
{
    temp=first->prev; // last node me pahuch sakte h
    ttemp=new DCLL;
    cin>>ttemp->data;
    ttemp->next=first;
    first->prev=ttemp;
    temp->next=ttemp;
    ttemp->prev=temp;
}
void add_before_first()
{
    
    temp=first->prev;
    p=new DCLL;
    p->next=first;
    p->prev=temp;
    first->prev=p;
    cout<<"enter";
    cin>>p->data;
    first=p;

    ttemp=new DCLL;
    cin>>ttemp->data;
    ttemp->next=first;
    first->prev->next=ttemp;
    ttemp->prev=first->prev;
    first=ttemp;
}
void display()
{
   temp=first;
   do{
    cout<<temp->data<<" ";
    temp=temp->next;
   }while (temp!=first); 
}
int main()
{
    create_first();
    add_node();
    add_node();
    add_before_first();
    display();
}