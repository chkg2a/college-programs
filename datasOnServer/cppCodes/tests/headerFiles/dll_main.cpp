#include<iostream>
#include"dll.h"

int main(){
  DList dll = dlist_init();
  /*dlist_addRear(dll,0);*/
  dlist_addRear(dll,20);
  dlist_delRear(dll);
  /*dlist_delRear(dll);*/
  /*dlist_delRear(dll);*/

  dlist_display(dll);
}
