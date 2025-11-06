#include<iostream>
#include"stack.h"

using namespace std;

int precedence(char c){
    if (c == '/' || c == '*'){
        return 3;
    }
    else if (c == '+' || c == '-'){
        return 2;
    }
    else if (c == '(' || c == ')'){
        return 1;
    }
    return 0;
}

bool isOperator(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void postFix(string & infix, string & postfix){
    Stack s;
    init(&s);
    int inpos = 0;
    while (inpos < infix.length()){
        char symb = infix[inpos];
        if(symb == '('){
            push(&s, symb);
        }
        else if(symb == ')'){
            while(stackTop(&s) != '('){
                postfix += pop(&s);
            }
            pop(&s);
        }
        else if(isalnum(symb)){
            postfix += symb;
        }
        else if(isOperator(symb)){
            while(!stack_empty(&s) && precedence(stackTop(&s)) >= precedence(symb) ){
                postfix += pop(&s);
            }
            push(&s, symb);
        }
        inpos++;
    }
    while (!stack_empty(&s)){
        postfix += pop(&s);
    }
}

int main(){
    cout << "Please enter an infix : ";
    string infix;
    cin >> infix;
    string postfix = "";
    cout << "Infix - " << infix << endl;
    postFix(infix, postfix);
    cout << "PostFix - " << postfix << endl;
    return 0;
}
