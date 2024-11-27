#ifndef QUEUE
#define QUEUE
#define MAX 10

struct queue {
  int F,R;
  int data[MAX];
};
typedef struct queue Queue;

void enqueue(queue * q, int data);
int dequeue(queue * q);
int is_empty(queue * q);
void display(queue * q);

#endif // !QUEUE
