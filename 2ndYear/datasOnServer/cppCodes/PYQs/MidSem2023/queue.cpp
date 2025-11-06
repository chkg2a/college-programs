#include <iostream>
#define MAXSIZE 100
using namespace std;

struct Queue {
  int data[MAXSIZE];
  int F, R;

  Queue(){
    F = -1;
    R = -1;
  }
};

void enqueue(Queue * q, int val){
  if((q->R == q->F+1) || (q->F == 0) && (q->R == MAXSIZE-1)){
    cout << "FULL" << endl;
    return;
  }
  if(q->F == -1){
    q->F = 0;
    q->R = 0;
  }
  else if(q->R == MAXSIZE - 1){
    q->R = 0;
  }
  else{
    q->R++;
  }
  q->data[q->R] = val;
}


int main () {


  return 0;
}
