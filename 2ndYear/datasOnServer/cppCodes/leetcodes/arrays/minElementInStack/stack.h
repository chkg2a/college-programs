#ifndef STACK_H
#define STACK_H
#define MAXSIZE 100

struct stack{
    int arr[MAXSIZE];
    int top;
};

void initializeStack(stack *);
int push(stack *,int);
int pop(stack *);
int isEmpty(stack *);
int top(stack *);

#endif
