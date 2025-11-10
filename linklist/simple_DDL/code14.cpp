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
// int delete_after(int x)
// {
//     temp=first;
//     while(temp->data!=x){
//         temp=temp->next;
//     }
//     ttemp=temp->next;
//     p=ttemp->next;
//     temp->next=p;
//     p->prev=temp;
//     ttemp->next=ttemp->prev=NULL;
//     delete ttemp;

// }
int delete_before(int x)
{
    temp = first;
    while (temp->data != x)
        temp = temp->next;

    ttemp = temp->prev;
    p = ttemp->prev;

    temp->prev = p;
    p->next = temp;

    ttemp->next = ttemp->prev = NULL;
    delete ttemp;
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
  addnode(40);
  // delete_after(20);
  delete_before(30);
  display();
}
//delete after