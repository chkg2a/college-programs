#include <iostream>
#define MAXSIZE 3
#define TRUE 1
#define FALSE 0
using namespace std;

typedef struct queue{
  int items[MAXSIZE];
  int F, R;
} Queue;

void enqueue(queue *, int);
int dequeue(queue *);
int queue_empty(queue *);
void display(queue *);

int main () {
  queue q;
  q.F = -1, q.R = -1;
  enqueue(&q,10);
  enqueue(&q,20);
  dequeue(&q);
  enqueue(&q,20);
  enqueue(&q,30);
  // display(&q);
  dequeue(&q);
  display(&q);

  return 0;
}

int queue_empty(queue * q){
  if(q->F == -1){
    return TRUE;
  }
  return FALSE;
}

void enqueue(queue * q, int val){
  if((q->F == 0) && (q->R == MAXSIZE-1) || (q->F == q->R+1)){
    cout << "Queue Overflow\n";
    exit(1);
  }
  if(q->F == -1 && q->R == -1){
    q->F = 0;
    q->R = 0;
  }
  else if(q->R == MAXSIZE-1){
    q->R = 0;
  }
  else{
    q->R++;
  }
  q->items[q->R] = val;
}

int dequeue(queue * q){
  if(queue_empty(q)){
    return -1;
  }
  int ele = q->items[q->F];
  if(q->F == q->R){
    q->F = -1;
    q->R = -1;
  }
  else if(q->F == MAXSIZE-1){
    q->F = 0;
  }
  else{
    q->F++;
  }
  return ele;
}

 void display(queue * q){
  for(int i=q->F;i!=q->R; i=(i+1)%MAXSIZE){
     cout << q->items[i] << ",";
   }
   cout << q->items[q->R];
 }

/*void display(queue * q){*/
/*  int i = q->F;*/
/*  while(i != q->R){*/
/*    cout << q->items[i] << ",";*/
/*    if(i == q->R){*/
/*      break;*/
/*    }*/
/*    i = (i + 1) % MAXSIZE; // Move to the next index, wrapping around using modulo*/
/*  }*/
/*  cout << q->items[i];*/
/*}*/
