
#include <iostream>
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

using namespace std;

int TRUE=1, FALSE=0;

void init(Stack * s){
    s->top=-1;
}

int stack_empty(Stack *s){
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
    if(stack_empty(s)){
        cout << "Stack is empty";
        exit(1);
    }
    return s->data[s->top--];
}

int stackTop(Stack * s){
    if(stack_empty(s)){
        cout << "Stack is empty";
        exit(1);
    }
    return s->data[s->top];
}
