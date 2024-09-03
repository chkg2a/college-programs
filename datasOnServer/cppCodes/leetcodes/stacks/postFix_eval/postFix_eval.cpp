#include <iostream>
#include <cmath>
#include "stack.h"

using namespace std;

float operation(int, double, double);
float eval(string);

int main(){
    cout << "Please enter a PostFix to eval : ";
    string expr;
    cin >> expr;
    
    cout << "The original expr " << expr << endl;
    cout << "The converted expr " << eval(expr) << endl;
    return 0;
}

float operation(int c, double op1, double op2){
    switch(c)
    {
        case '+': return (op1 + op2);
        case '-': return (op1 - op2);
        case '*': return (op1 * op2);
        case '/': return (op1 / op2);
        case '$': return pow(op1, op2);
        default : cout << "Illegal operation\n";
                  exit(1);
    }
}

float eval(string expr){
    Stack s;
    init(&s);
    int c, pos;
    double operand1, operand2, value;
    for(pos=0; pos < expr.size();pos++){
        c = expr[pos];
        if(isdigit(c)){
            push(&s, (float)(c - '0'));
        }
        else{
            if(!stack_empty(&s)){
                operand2 = pop(&s);
            }
            if(!stack_empty(&s)){
                operand1 = pop(&s);
            }
            value = operation(c, operand1, operand2);
            push(&s, value);
        }
    }
    return pop(&s);
}
