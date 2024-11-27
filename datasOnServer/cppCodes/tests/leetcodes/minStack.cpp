#include<iostream>
#include"stack.h"
#include<vector>
using std::cout;

void push(stack * stk1, stack * stk2,int val){
  if(stack_empty(stk2)){
    push_back(stk1,val);
    push_back(stk2,val);
    return;
  }
  if(val < peak_top(stk2)){
    push_back(stk2, val);
  }else{
    push_back(stk2, peak_top(stk2));
  }
  push_back(stk1, val);
}

int getMin(stack * stk1, stack * stk2){
  return peak_top(stk2);
}

void pop_stk(stack * stk1, stack * stk2){
  pop(stk1);
  pop(stk2);
}

int main(){
  stack * stk1 = new stack;
  stack * stk2 = new stack;

  init_stack(stk1);
  init_stack(stk2);
  std::vector<int> nums = {4,5,3,7,6,2,0,4};
  for(int i : nums){
    push(stk1, stk2,i);
  }
  cout << "Current lowest : " << getMin(stk1,stk2);
  return 0;
}
