#include <iostream>
#include "dll.h"
using namespace std;

void removeDuplicates(DList head){
  if(isEmpty(head) || isEmpty(head->next)){
    return;
  }
  DList current = head->next->next;
  while(current != NULL){
    if(current->data == current->prev->data){
      DList temp = NULL;
      if(current->next != NULL){
        temp = current->next;
        temp->prev = current->prev;
      }
      current->prev->next = current->next;
      delete current;
      current = temp;
    }else{
      current = current->next;
    }
  }
}

int main () {
  DList head = initializeNode();
  addRear(head,0);
  addRear(head,10);
  addRear(head,10);
  addRear(head,10);
  addRear(head,20);
  addRear(head,30);
  addRear(head,30);
  addRear(head,40);
  addRear(head,40);
  addRear(head,40);
  addRear(head,40);
  removeDuplicates(head);
  displayList(head);

  return 0;
}
