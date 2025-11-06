#include <iostream>
#include <stack>
using namespace std;

int isPalindrome(const string & str){
    int size = str.size();
    stack<char> stk;
    for(int i = 0; i < size; i++){
        stk.push(str[i]);
    }
    int i = 0;
    while(!stk.empty()){
        if(stk.top() != str[i++]){
            return 0; 
        }
        stk.pop();
    }
    return 1;
}

int main(){
    string s = "123";
    cout << isPalindrome(s) << endl;
    return 0;
}
