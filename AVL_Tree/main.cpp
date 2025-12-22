#include<iostream>
using namespace std;
struct AVL{
    int data;
    AVL *left, *right;
    int balance;
};
AVL *root, *temp, *ttemp,*p,*q;
void init(){
    root=temp=ttemp=p=NULL;
}
void create_first(int x){
    root=new AVL;
    root->left=root->right=NULL;
    root->data=x;
    root->balance++;
}
void Add_node(int x){
    temp=root;
    while(temp!=NULL){
        ttemp=temp;
        if(temp->data>x)
            temp->left=temp;
        else
            temp->right=temp;
    }
    p=new AVL;
    p->data=x;
    p->left=p->right=NULL;
    if(tt)

}