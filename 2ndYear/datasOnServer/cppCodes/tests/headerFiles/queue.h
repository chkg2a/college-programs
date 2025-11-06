#ifndef QUEUE
#define QUEUE
#define MAXSIZE 5

struct queue{
  int data[MAXSIZE];
  int F, R;
};

void init(queue *);
void enqueue(queue *, int);
int dequeue(queue *);
bool queue_empty(queue *);
void display(queue *);

#endif // !QUEUE
