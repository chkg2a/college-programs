#include <iostream>
#include "stack.h"
using namespace std;

void reverseAndPrint(string s){
  Stack stk;
  for(auto x : s){
    push(&stk,x);
  }
  while(!stack_empty(&stk)){
    cout << (char)pop(&stk);
  }
  cout << endl;
}

int main (int argc, char *argv[]) {
  string s = "Now I have become death, the destroyer of world";
  cout << s << endl;
  reverseAndPrint(s);

  return 0;
}
