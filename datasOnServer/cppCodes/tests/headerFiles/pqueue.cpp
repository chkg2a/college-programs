#include "pqueue.h"
#include <iostream>

using namespace std;

pqueue getNode(int data, int priority) {
  Node *newNode = new Node;
  newNode->next = NULL;
  newNode->data = data;
  newNode->priority = priority;
  return newNode;
}

pqueue init() { return getNode(0,0); }

void enqueue(pqueue head, int data, int priority) {
  pqueue newNode = getNode(data,priority);
  pqueue current = head->next;
  pqueue prev;
  if(head->next == NULL || priority > current->priority){
    newNode->next = current;
    head->next = newNode;
  }else{
    while(current != NULL && priority <= current->priority){
      prev = current;
      current = current->next;
    }
    prev->next = newNode;
    newNode->next = current;
  }
}

bool pqueue_empty(pqueue head){
  return head->next == NULL;
}

int dequeue(pqueue head){
  if(pqueue_empty(head)){
    return (int)NULL;
  }
  pqueue firstNode = head->next;
  head->next = firstNode->next;
  int data = firstNode->data;
  delete firstNode;
  return data;
}

void display(pqueue head){
  if(pqueue_empty(head)){
    cout << "null";
    return;
  }
  pqueue current = head->next;
  while(current != NULL){
    cout << current->data << "-";
    current = current->next;
  }
  cout << "null";
}
