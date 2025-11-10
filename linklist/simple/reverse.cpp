
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p;

void init()
{
 first=temp=ttemp=null;
}
void addnode()
{
  temp=first;
 
  while(temp->next!=null)
  {
  temp=temp->next;
  }

  ttemp=new node;
  ttemp->next=null;
   cin>>ttemp -> data;
  temp->next=ttemp;
}
void createfirst()
{
 first=new node;
 cout<<"Enter first node"<<endl;
 cin>>first -> data ;
 // first->data=val;
  first->next=null;
}
void reverse()
{
//  temp=first;
 
//  while(temp->next->next!=NULL){
    
  
//     temp=temp->next;
// }
    // ttemp=temp->next;
    // temp->next=first;
    // ttemp->next=temp->next;
    // first->next=NULL;
    // ttemp=first;

    temp = first;          // current node
    ttemp = null;          // previous node
    p = null;              // next node

    while(temp != null)
    {
        p = temp->next;    // store next node
        temp->next = ttemp; // reverse the link
        ttemp = temp;      // move prev one step forward
        temp = p;          // move current one step forward
    }
    first = ttemp;         // update head to new first (last node)


}
void disp()
{
 temp=first; 
 while(temp!=null)
 { 
   cout<<temp->data<<" ";
   temp=temp->next;
 }
}
int main()
{
	init();
	createfirst();
   cout<<"Enter node";
	addnode();
  addnode();
  addnode();
  addnode();
  reverse();
	disp();

}
// swap first and lasst
    

