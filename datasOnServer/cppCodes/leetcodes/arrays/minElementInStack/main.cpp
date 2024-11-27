#include <iostream>
#define MAXSIZE 100

using namespace std;


struct stack{
    int arr[MAXSIZE];
    int top;
};
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

int main(){
    stack stk;
    stack minStk;
    const int size = 7;
    int arr[size] = {5,2,3,4,1,6,9};
    initializeStack(&stk);
    initializeStack(&minStk);

    for(int i = 0; i < size; i++){
        cout << arr[i] << ',';
        push(&stk,arr[i]);
        if(top(&stk) <= top(&minStk) || isEmpty(&minStk)){
            push(&minStk,arr[i]);
        }else{
            push(&minStk,top(&minStk));
        }
    }

    int lowestNumber = top(&minStk);
    cout << endl << "Lowest Numner = " << lowestNumber << endl;

    return 0;
}
