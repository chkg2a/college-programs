#include <iostream>
#include "queue.h"

using namespace std;

int main(){
  queue q;
  init(&q);
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  enqueue(&q, 40);
  enqueue(&q, 50);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  /*cout << q.F << ',' << q.R << endl;*/
  display(&q);
  return 0;
}
