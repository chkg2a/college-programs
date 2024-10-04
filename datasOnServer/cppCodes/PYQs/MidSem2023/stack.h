#ifndef MYSTACK
#define MYSTACK
#define MAX_SIZE 100
#include <iostream>
using namespace std;

struct Stack {
    string data[MAX_SIZE];
    int top;
};

void push(Stack *, string);
string pop(Stack *);
string stackTop(Stack *);
int stack_empty(Stack *);
void init(Stack *);

#endif
