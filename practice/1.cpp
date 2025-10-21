#include<iostream>
using namespace std;
struct node{
    char data;
    node *next,*prev;
};
node *temp,*first, *ttemp, *p,*d;

int init(){
    first=temp=ttemp=p=NULL;
}
int create_first(char x)
{
    first=new node;
    first->prev=NULL;
    first->next=NULL;
    first->data=x;
}
int addnode(char x)
{
    temp=first;
    
    while(temp->next!=NULL){
        ttemp=temp;
        temp=temp->next;
    }
    p=new node;
    p->prev=ttemp;
    p->next=NULL;
    p->data=x;
}
int pali()
{
    temp=first;
    d=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    if(temp==d){
        cout<<"\npalindrone";
    }else cout<<"\nnot panlindrone";
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
    init();
    create_first('M');
    addnode('A');
    addnode('M');
    display();
    pali();
}