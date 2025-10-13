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

void display(){
  temp = first;
  while(temp !=NULL){
  cout<<temp -> data<<endl;
  temp=temp->next;
  }
}


int main(){
  init();
  create_first();
  int flag=1;
  char ans;
  while(flag==1){
    cout<<"do you want to continue : ";
    cin>>ans;
    if(ans=='y'){
      cout<<"enter next data";
      add_node();
    }
    else{
      flag = 0;
      display();
    }
  }
  return 0;
}

    

