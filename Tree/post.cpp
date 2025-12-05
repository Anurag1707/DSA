#include<iostream>
using namespace std;
struct BST{
    int data;
    BST *left, *right;
};
BST *root,*temp,*ttemp,*p;
void init(){
    root=temp=ttemp=p=NULL;
}
void create_root(int x){
    root=new BST;
    root->data=x;
    root->left=root->right=NULL;
}
void add_node(int x){
    temp=root;
    while(temp!=NULL){
        ttemp=temp;
        if(temp->data>x){
            temp=temp->left;
        }else{
            temp=temp->right;
        }
    }
    p=new BST;
    p->data=x;
    p->left=p->right=NULL;
    if(ttemp->data>x){
        ttemp->left=p;
    }else{
        ttemp->right=p;
    }
}

void pre(BST *p){
    if(p!=NULL){
        pre(p->left);
        pre(p->right);
        cout<<p->data<<" ";
    }
}

int main(){
   init();
   create_root(100); 
   add_node(50);
   add_node(40);    
   add_node(70);
   pre(root);
}