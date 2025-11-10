#include <iostream>
using namespace std;
struct SCLL
{
    int data;
    SCLL *next;
};
SCLL *temp, *first, *ttemp, *p;


void create_first(int x)
{
    first=new SCLL;
    // cout<<"Enter first number ";
    // cin>>first->data;
    first->data=x;
    first->next=first;
}

void add_nodes(int x)
{
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new SCLL;
    // cout<<"Enter data ";
    // cin>>ttemp->data;
    ttemp->data=x;
    ttemp->next=first;
    temp->next=ttemp;
}
void swap()
{
    p=temp=first;
    ttemp=temp->next;
    p=ttemp->next;
    while(temp->next!=first)
    temp=temp->next;
    first->next=p;
    ttemp->next=first;
    temp->next=ttemp;
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
    create_first(10);
    add_nodes(20);
    add_nodes(30);
    add_nodes(39);
    swap();
    display();
}
//swap 1 and 2 node