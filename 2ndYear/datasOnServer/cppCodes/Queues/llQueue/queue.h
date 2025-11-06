#ifndef MYLIST
#define MYLIST

typedef struct Node {
    int data;
    Node * next;
    Node * last;
} * Queue;

Queue init();
Queue getNode(int);
bool queueEmpty(Queue);
void enqueue(Queue, int);
int dequeue(Queue);
int peak(Queue);
void display(Queue);

#endif
