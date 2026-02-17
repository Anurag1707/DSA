#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

struct node {
    char data;
    node *left;
    node *right;
};

// Global variables
node *root = NULL;
node *temp = NULL;
node *p = NULL;

bool Flag;
int top = -1;
node* stack_arr[100];

// Stack functions
void push(node *x) {
    stack_arr[++top] = x;
}

node* POP() {
    return stack_arr[top--];
}

// Create node function
node* Create_Node(char x) {
    node *newnode = new node;
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}


// ----------------------
// YOUR ORIGINAL FUNCTION (NO CHANGE)
// ----------------------

void Expression(char Prefix[])
{
    Flag=false;
    for(int i=0;i<strlen(Prefix);i++)
       {
        p=Create_Node(Prefix[i]);
        if(root==NULL)
          {
            root=temp=p;
          }else
              {
                if(Flag==false)
                  {
                    temp->left=p;
                  }else
                     {
                        temp=POP();
                        temp->right=p;
                     }
                temp=p;  
              }
          
            if(isdigit(Prefix[i]))
              {
                Flag=true;
              }else
                 {
                    Flag=false;
                    push(p);
                 }
       }
}

// Simple inorder traversal to check tree
void inorder(node *r)
{
    if(r!=NULL)
    {
        inorder(r->left);
        cout<<r->data<<" ";
        inorder(r->right);
    }
}


// ------------------ MAIN FUNCTION ------------------

int main()
{
    char Prefix[100];

    cout<<"Enter Prefix Expression: ";
    cin>>Prefix;

    Expression(Prefix);

    cout<<"Inorder Traversal: ";
    inorder(root);

    return 0;
}