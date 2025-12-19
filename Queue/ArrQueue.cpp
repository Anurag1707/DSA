#include<iostream>
using namespace std;
#define max 5

struct AQueue{
    int data[max];
    int front, rear;
};

AQueue *p, Q1;

void init(){
    p=&Q1;
    p->front=p->rear=-1;
}
int full(){
    if(p->rear=max-1)
      return 1;
    else
      return 0;  
}

int empty(){
    if(p->front==1)
      return 1;
    else 
      return 0;  
}

void EQ(int x){
  if(full()==1){
    return;
  }
                          
  if(p->rear==-1){
    p->rear=p->front=0;
  }else{
    p->rear++;
  }
  p->data[p->rear]=x;
}

int DEQ(){
  int x;
  if(empty()==1)
    return 0;
  
  x=p->data[p->front];
  if(p->front==p->rear)
    p->front=p->rear=-1;
  else
    p->front++;

  return x;
}
void display(){
for(int i = p->front; i <= p->rear; i++){
        cout << p->data[i] << " ";
    }
    cout << endl;
}

int main(){
  init();
  EQ(10);
  EQ(20);

  cout<<DEQ()<<" ";
  cout<<DEQ()<<" ";
  display();
}