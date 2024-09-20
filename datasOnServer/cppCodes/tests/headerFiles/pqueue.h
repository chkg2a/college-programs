#ifndef PQUEUE
#define PQUEUE
#define MAXSIZE 5

typedef struct Node{
  Node * next;
  int data;
  int priority;
  Node * last;
} * pqueue;

pqueue init();
void enqueue(pqueue , int, int);
int dequeue(pqueue );
bool pqueue_empty(pqueue );
void display(pqueue );

#endif // !QUEUE
