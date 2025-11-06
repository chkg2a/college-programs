#include "stack.h"

void initializeStack(stack * stk){
    stk->top = 0;
}

int isEmpty(stack * stk){
    return (stk->top == 0);
}

int push(stack * stk, int data){
    if(stk->top == MAXSIZE-1){
        return -1; 
    }
    stk->arr[++(stk->top)] = data;
    return 0;
}

int pop(stack * stk){
    if(isEmpty(stk)){
        return -1;
    }
    return stk->arr[stk->top--];
}

int top(stack * stk){
    if(isEmpty(stk)){
        return -1;
    }
    return stk->arr[stk->top];
}
