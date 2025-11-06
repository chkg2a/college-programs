#include<iostream>
#include "stack.h"

using namespace std;

void init(stack * s){
  s->top = -1;
}

void push(stack * s, int data){
  if(s->top == MAXSIZE - 1){
    cerr << "stack overflow";
    exit(1);
  }
  s->data[++(s->top)] = data;
}

bool stack_empty(stack * s){
  return s->top == -1;
}

int pop(stack * s){
  if(stack_empty(s)){
    cerr << "stack is empty";
    exit(1);
  }
  return s->data[s->top--];
}

int stack_top(stack * s){
  if(stack_empty(s)){
    cerr << "stack is empty";
    exit(1);
  }
  return s->data[s->top];
}
