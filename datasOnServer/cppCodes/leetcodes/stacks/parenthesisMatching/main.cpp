#include <iostream>
#include "stack.h"
#include <unordered_map>

using namespace std;

bool parenthesis_matching(string);

int main(){
    string s = "{[()]}";
    parenthesis_matching(s);
    return 0;
}

bool parenthesis_matching(string str){
    Stack s;
    init(&s);
    unordered_map<char,char>  umap = {
        { '}', '{' },
        { ']', '[' },
        { ')', '(' },
    };
    
    for(int pos = 0; pos < str.size(); pos++){
        if(str[pos] == '{' || str[pos] == '[' || str[pos] == '('){
            push(&s, str[pos]);
        }
     }

    if (stack_empty(&s)){
        return true;
    }
    else{
        return false;
    }
}
