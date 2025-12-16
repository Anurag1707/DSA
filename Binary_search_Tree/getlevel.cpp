
#include<iostream>
using namespace std;
struct BST{
    int data;
    BST *left, *right;
};

BST *root, *temp, *ttemp, *p;

void init(){
    root=temp=ttemp=p=NULL;
}

void Create_root(int x){
    root=new BST;
    root->data=x;
    root->left=NULL;
    root->right=NULL;
}

void Add_root(int x){
    temp=root;
    while(temp!=NULL){
        ttemp=temp;
        if(temp->data>x)
        temp=temp->left;
        else 
        temp=temp->right;
    }
    p=new BST;
    p->data=x;
    p->left=p->right=NULL;
    if(ttemp->data>x)
    ttemp->left=p;
    else
    ttemp->right=p;
}

void In(BST *p)
{
    if(p!=NULL)
    {
      In(p->left);  
      cout<<p->data<<" ";
      In(p->right);
    }
}

int getlevel(BST *root, int key, int level){
    if(root == NULL)
        return 0;

    if(root->data == key)
        return level;

    if(key < root->data)
        return getlevel(root->left, key, level + 1);
    else
        return getlevel(root->right, key, level + 1);
}



int main(){
    init();
    Create_root(100);
    Add_root(20);
    Add_root(30);
    Add_root(10);
    In(root);

    int key = 10;
    int level = 1;
    int leveldata= getlevel(root, key, level);
    cout<<endl<<"level is " << leveldata;
}