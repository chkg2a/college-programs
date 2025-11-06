#ifndef MYSTACK
#define MYSTACK
#define MAXSIZE 100

struct stack{
  int data[MAXSIZE];
  int top;
};

void init(stack *);
void push(stack *, int);
int pop(stack *);
int stack_top(stack *);
bool stack_empty(stack *);

#endif
