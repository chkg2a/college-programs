#include<iostream>
#include"queue.h"

using namespace std;

int main(){
  Queue q = init();
  enqueue(q,5);
  enqueue(q,10);
  enqueue(q,20);
  dequeue(q);
  cout << peak(q) << endl;
  return 0;
}
