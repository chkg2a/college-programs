#include <bits/stdc++.h>
#include <chkg2a/fn_ll.h>
#include "queue.h"
using namespace std;
using namespace chk;



int main () {
  Queue * q;
  q->F = -1, q->R = -1;
  enqueue(q,5);
  enqueue(q,10);
  enqueue(q,15);
  display(q);
  /*cout << dequeue(q);*/
  return 0;
}
