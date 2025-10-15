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

void add_before_first(int x){
    
    temp=new node;
    temp -> data=x;
    temp -> next=first;
    first=temp;
}


void display(){
    add_before_first(50);
    cout<<endl;
  temp = first;
  while(temp !=NULL){
  cout<<temp -> data<<endl;
  temp=temp->next;
  }
}


int main(){
  init();
  create_first();

  
add_node();
add_node();
add_node();
add_node();

add_before_first(50);
display();

  return 0;
}

    

