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
// int addnode(int x)
// {
//   temp=first;
//   while(temp->next!=NULL){
//     ttemp=temp;
//     temp=temp->next;
//   }
//   p=new node;
//   temp->next=p;
//   p->data=x;
//   p->prev=ttemp;
//   p->next=NULL;
// }
int addnode(int x) {
    temp = first;
    while (temp->next != NULL)
        temp = temp->next;

    p = new node;
    p->data = x;
    p->next = NULL;
    p->prev = temp;
    temp->next = p;
    return 0;
}

int reverse()
{
    temp = first;
    node* last = NULL;

    // Step 1: Traverse and swap next/prev for each node
    while (temp != NULL) {
        last = temp;  // store last node
        node* tempNext = temp->next;
        temp->next = temp->prev;
        temp->prev = tempNext;
        temp = tempNext;
    }

    // Step 2: After loop, 'last' is new first
    first = last;
}

int display()
{
  temp=first;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main(){
  create_first(10);
  addnode(20);
  addnode(30);
  display();
  reverse();
  display();
}