
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
void del_nth_node(int x)
{
    temp=first;
    while(temp->data!=x)
    {  ttemp=temp;
       temp=temp->next;
    }
  
    p=temp->next;
    ttemp->next=p;
    temp->next=NULL;
    delete temp;

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
  del_nth_node(30);
	disp();

}
//delete  nth node
    

