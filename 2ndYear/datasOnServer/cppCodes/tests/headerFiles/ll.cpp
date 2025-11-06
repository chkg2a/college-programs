#include<iostream>
#include"ll.h"

using namespace std;

List list_getNode(int data){
  List newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

List list_init(){
  return list_getNode(0);
}

bool list_empty(List head){
  return head->next == NULL;
}

void list_addFront(List head, int data){
  List newNode = list_getNode(data);
  newNode->next = head->next;
  head->next = newNode;
}

void list_addRear(List head, int data){
  List newNode = list_getNode(data);
  List current = head;
  if(list_empty(head)){
    head->next = newNode;
    return;
  }
  while(current->next != NULL){
    current = current->next;
  }
  current->next = newNode;
}

void list_delRear(List head){
  List current = head;
  if(list_empty(head)){
    return;
  }
  List prev;
  while(current->next != NULL){
    prev = current;
    current = current->next;
  }
  prev->next = NULL;
  delete current;
}

void list_delFront(List head){
  if(list_empty(head)){
    return;
  }
  List firstNode = head->next;
  head->next = firstNode->next;
  delete firstNode;
}

void list_destroy(List head){
  if(list_empty(head)){
    return;
  }
  List current = head->next;
  while(current != NULL){
    List temp = current->next;
    delete current;
    current = temp;
  }
}

void list_display(List head){
  List current = head->next;
  while(current != NULL){
    cout << current->data << "->";
    current = current->next;
  }
  cout << "null";
}
