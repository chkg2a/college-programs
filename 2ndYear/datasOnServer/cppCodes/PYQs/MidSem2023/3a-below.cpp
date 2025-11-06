#include <bits/stdc++.h>
#include <cctype>
#include "stack.h"
using namespace std;

bool isOperator(char x){
  return (x == '/' || x == '+' || x == '-' || x == '*');
}

string postFixToInfix(string s){
  Stack stk;
  init(&stk);
  string output = "";
  string op1;
  string op2;
  for(auto x : s){
    if(isOperator(x)){
      op2 = pop(&stk);
      op1 = pop(&stk);
      string infix = "(" + op1 + x + op2 + ")";
      push(&stk,infix);
    }else if(isalnum(x)){
      string o = "";
      o += x;
      push(&stk,o);
    }
  }
  while(!stack_empty(&stk)){
    output+= pop(&stk);
  }
  return output;
}

int main(int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();

  string s = "ABC+*D*";
  cout << postFixToInfix(s);

  std::cout << std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  auto duration_s = std::chrono::duration_cast<std::chrono::seconds>(end - start);
  std::cout << "Execution time: " << duration_s.count() << " seconds " << std::endl;
  auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "Execution time: " << duration_ms.count() << " milliseconds " << std::endl;
  auto duration_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
  std::cout << "Execution time: " << duration_ns.count() << " nanoseconds ";
  return 0;
}
