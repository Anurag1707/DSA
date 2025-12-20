#include<iostream>
using namespace std;
struct LQueue{
    int data;
    LQueue *next;
};
LQueue *front, *rear,*temp;

void init(){
    front=rear=temp=NULL;
}
void EnQ(int x){
    temp=new LQueue;
    if(temp==NULL)
      return;
    
    temp->data=x;
    temp->next=NULL;
    if(rear==NULL)
      front=rear=temp;
    else 
      {
        rear->next=temp;
        rear=temp;
      }    
    
}

int DeQ(){
    int x;
    if(front==NULL)
      return 0;
    temp=front;  
    x=temp->data;
    // temp=front;
    if(front==rear)
    
      front=rear=NULL;
    else 
      front=front->next;
    temp->next=NULL; 
    delete temp;
    return x;
}

void display(){
    temp=front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    init();
    EnQ(10);
    EnQ(20);
    EnQ(30);
    EnQ(40);

    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";
    cout<<DeQ()<<" ";

    display();

}