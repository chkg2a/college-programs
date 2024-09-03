#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

bool checkValid(string s){
    stack<char> stk;
    unordered_map<char,char> umap = {
        {'(',')'},
        {'[',']'},
        {'{','}'},
    };
    
    for(char x : s){
        if(x == '(' || x == '[' || x == '{'){
            stk.push(x);
        }
        else if(x == ')' || x == '}' || x == ']'){
            if(umap[stk.top()] == x){
                stk.pop();
            }
            else{
                return false;
            }
        }
    }
    if(stk.empty()){
        return true;
    }
    return false;
}

int main(){
    string s = "([{])";
    if(checkValid(s)){
        cout << s << " is a valid parenthesis";
    }
    else{
        cout << s << " is not a valid parenthesis";
    }
}
