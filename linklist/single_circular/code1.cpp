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
void add_before_first()
{
//     temp=first;
//     ttemp=new SCLL;
//     cin>>ttemp->data;
//     ttemp->next=first;
//     while(temp->next!=first)
//     temp=temp->next;
//     temp->next=ttemp;
//     first=ttemp;
temp=first;
while(temp->next!=first)
temp=temp->next;
ttemp=temp;
p=new SCLL;
cin>>p->data;
ttemp->next=p;
p->next=first;
first=p;
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
    add_before_first();
    display();
}