#include "stack.h"
#include <iostream>
using std::cout;

void init_stack(stack * stk){
  stk->top = -1; 
};
int stack_empty(stack * stk){
  return stk->top == -1;
};
int peak_top(stack * stk){
  return stk->arr[stk->top];
};
void push_back(stack * stk, int val){
  if(stk->top == MAX - 1){
    cout << "Already full";
  }
  stk->arr[++(stk->top)] = val;
};
int pop(stack * stk){
  if (stack_empty(stk)) return -1;
  return stk->arr[stk->top--];
};
