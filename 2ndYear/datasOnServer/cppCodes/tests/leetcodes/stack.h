#ifndef MY_STACK_H
#define MY_STACK_H
#define MAX 100

struct stack {
  int arr[MAX];
  int top;
};

void init_stack(stack * stk);
int stack_empty(stack * stk);
int peak_top(stack * stk);
int pop(stack * stk);
void push_back(stack * stk, int val);

#endif // !My_Stack
