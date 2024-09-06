#include<iostream>
#include"queue.h"

Queue init(){
    Queue l = getNode(0);
    l->last = l;
    return l;
}

Queue getNode(int val){
    Queue l = new Node;
    l->next = nullptr;
    l->data = val;
    return l;
}

bool queueEmpty(Queue l){
    if(l->next == nullptr){
        return true;
    }
    return false;
}

void enqueue(Queue head, int val){
    Queue newNode = getNode(val);
    if(queueEmpty(head)){
      head->next = newNode;
    }
    head->last->next = newNode;
    head->last = newNode;
}

int dequeue(Queue head){
  if(queueEmpty(head)){
    return 0;
  }
  Queue front = head->next;
  head->next = front->next;
  int data = front->data;
  delete front;
  return data;
}

int peak(Queue head){
  return head->next->data;
}

void display(Queue head){
  Queue current = head->next;
  while(current != nullptr){
    std::cout << current->data << "->";
    current = current->next;
  }
}
