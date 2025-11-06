#ifndef MYSTACK
#define MYSTACK
#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void push(Stack *, int);
int pop(Stack *);
int stackTop(Stack *);
int stack_empty(Stack *);
void init(Stack *);

#endif
