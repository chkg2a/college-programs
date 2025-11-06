#include <iostream>
#include "stack.h"

using namespace std;

int TRUE=1, FALSE=0;

void init(Stack * s){
    s->top=-1;
}

int isEmpty(Stack *s){
    if(s->top==-1){
        return TRUE;
    }
    return FALSE;
}

void push(Stack *s, int val){
    if(s->top==MAX_SIZE - 1){
        cout << "Stack overflow";
        exit(1);
    }else{
        s->top++;
        s->data[s->top] = val;
    }
}

int pop(Stack * s){
    if(isEmpty(s)){
        cout << "Stack is empty";
        exit(1);
    }
    return s->data[s->top--];
}

int peakTop(Stack * s){
    if(isEmpty(s)){
        cout << "Stack is empty";
        exit(1);
    }
    return s->data[s->top];
}
