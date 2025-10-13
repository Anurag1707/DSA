# include <iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

node *first , *temp , *ttemp ,*p;

void init(){
  first=temp=ttemp=NULL;

}

void create_first(){
  first = new node;
  first -> next = NULL;
  cout<<"enter data for first node : ";
  cin>>first->data;
}

void add_node(){
  temp=first;
  while(temp -> next !=NULL){
    temp=temp -> next;
  }
  ttemp=new node;
  ttemp -> next =NULL;
  cin>>ttemp-> data;
  temp -> next =ttemp;
}

void Add_after(int x,int y){
    temp=first;
    while(temp ->data!=x){
        temp=temp ->next;
    }
    ttemp=temp->next;
    p=new node;
    p -> data=y;
    p -> next=ttemp;
    temp -> next= p;
}

void display(){
  temp = first;
  while(temp !=NULL){
  cout<<temp -> data<<" ";
  temp=temp->next;
  }
}


int main(){
  init();
  create_first();
  add_node();
  add_node();
  add_node();
  Add_after(30,90);
  display();
    


  return 0;
}

    

