#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next, *prev;
};
node *first,*temp,*ttemp,*p;
int create_first(int)
{
    first=new node;
    first->prev=NULL;
    first->next=NULL;
}
int addnode()
{   
    temp=first;
   
    while(temp->next!=NULL)
  {
  temp=temp->next;
  }

  ttemp=new node;
  ttemp->prev=temp;
  ttemp->next=NULL;
   cin>>ttemp -> data;
  temp->next=ttemp;


}
void disp()
{
 temp=first; 
 while(temp!=NULL)
 { 
   cout<<temp->data<<" ";
   temp=temp->next;
 }
}
int main(){
    create_first(10);
    addnode();
}