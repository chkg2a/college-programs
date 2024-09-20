#include "pqueue.h"

int main(){
  pqueue pq = init();
  pqueue last = init();
  enqueue(pq,0,2);
  enqueue(pq,10,4);
  enqueue(pq,20,3);
  enqueue(pq,30,1);
  /*dequeue(pq);*/
  /*dequeue(pq);*/
  /*dequeue(pq);*/
  display(pq);
  return 0;
}
