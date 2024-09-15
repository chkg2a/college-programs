#ifndef MYQUEUE

typedef struct Node {
    Node * next;
    int data;
    int priority;
} * Queue;

Queue getNode(int, int);
Queue init();
bool queue_empty(Queue);
void enqueue(Queue, int, int);
int dequeue(Queue);
void display(Queue);
void destroy(Queue);

#endif
