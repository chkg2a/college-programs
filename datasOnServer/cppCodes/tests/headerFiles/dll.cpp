#include "dll.h"
#include <iostream>

using namespace std;

DList dlist_getNode(int data) {
  DList newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

DList dlist_init() { return dlist_getNode(0); }

bool dlist_empty(DList head) { return head->next == NULL; }

void dlist_addFront(DList head, int data) {
  DList newNode = dlist_getNode(data);
  newNode->next = head->next;
  DList firstNode = head->next;
  newNode->prev = head;
  if (firstNode != NULL) {
    firstNode->prev = newNode;
  }
  head->next = newNode;
}

void dlist_addRear(DList head, int data) {
  DList newNode = dlist_getNode(data);
  DList current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
  newNode->prev = current;
}

void dlist_delRear(DList head) {
  if (dlist_empty(head)) {
    return;
  }
  DList current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  if (current->prev == head) {
    head->next = NULL;
  }else{
    current->prev->next = NULL;
  }
  delete current;
}

void dlist_delFront(DList head) {
  if (dlist_empty(head)) {
    return;
  }
  DList firstNode = head->next;
  head->next = firstNode->next;
  if (firstNode->next != NULL) {
    firstNode->next->prev = head;
  }
  delete firstNode;
}

void dlist_destroy(DList head) {
  if (dlist_empty(head)) {
    return;
  }
  DList current = head->next;
  while (current != NULL) {
    DList temp = current->next;
    delete current;
    current = temp;
  }
}

void dlist_display(DList head) {
  DList current = head->next;
  while (current != NULL) {
    cout << current->data << "<->";
    current = current->next;
  }
  cout << "null";
}
