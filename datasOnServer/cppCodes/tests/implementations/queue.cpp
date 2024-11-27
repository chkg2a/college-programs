#include<iostream>
#include"queue.h"
using std::cout, std::endl;

void enqueue(queue * q, int data){
  if((q->F == 0 && q->R == MAX-1) || (q->F == q->R+1)){
    cout << "Overflow" << endl;
    exit(1);
  }
  if(q->F == -1){
    q->F = 0;
    q->R = 0;
  }else if(q->R == MAX - 1){
    q->R = 0;
  }else{
    q->R++;
  }
  q->data[q->R] = data;
}
int dequeue(queue * q){
  if(is_empty(q)) return -1;
  int ele = q->data[q->F];
  if(q->F == q->R){
    q->F = -1;
    q->R = -1;
  }else if(q->F == MAX - 1){
    q->F = 0;
  }else{
    q->F++;
  }
  return ele;
};
int is_empty(queue * q){
  return q->F == -1;
};
void display(queue * q){
  int i = q->F;
  while(i != q->R){
    cout << q->data[i] << " " << endl;
    if(i == MAX - 1){
      i = 0;
    }
    i++;
  }
};
