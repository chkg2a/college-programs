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

void enqueue(Queue * q){
  if(q->R == q->F+1){

  }
}


int main () {


  return 0;
}
