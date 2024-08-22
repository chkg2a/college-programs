#include <iostream>
#include <chrono>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

typedef struct Node {
  int data;
  Node * next;
} * List;

List getNode(int val){
  List node = new Node;
  node->data = val;
  node->next = NULL;
  return node; 
}

List listCreate(){
  List node = getNode(0);
  return node;
}

bool listEmpty(List l){
  if(l->next == NULL){
    return true;
  }
  return false;
}

void listDisplay(List l){
  if(listEmpty(l)){
    return;
  }
  List current = l->next;
  while(current->next != NULL){
    cout << current->data << "->";
    current = current->next;
  }
  cout << current->data;
}


void listAddFront(List l, int val){
  List node = getNode(val);
  node->next = l->next;
  l->next = node;
}

void listAddRear(List l, int val){
  List node = getNode(val);
  List current = l;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = node;
}

void listDelFront(List l){
  List first;
  first = l->next;
  l->next = first->next;
  delete first;
}

void listDelRear(List l){
  if(listEmpty(l)){
    cout << "List is empty" << endl;
    return;
  }

  List current = l->next;
  List prev = l;
  while(current->next != nullptr){
    prev = current;
    current = current->next;
  }
  prev->next = nullptr;
  delete current;

}

int main (int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();
  cout << "Output : ";
  srand(time(0));

  List bro = listCreate();
  listAddRear(bro,10);
  listAddRear(bro,20);
  listDelFront(bro);
  listDelFront(bro);
  listDisplay(bro);

  std::cout <<  std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  auto duration_s = std::chrono::duration_cast<std::chrono::seconds>(end - start); 
  std::cout << "Execution time: " << duration_s.count() << " seconds " << std::endl;
  auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start); 
  std::cout << "Execution time: " << duration_ms.count() << " milliseconds " << std::endl;
  auto duration_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start); 
  std::cout << "Execution time: " << duration_ns.count() << " nanoseconds ";


  return 0;
}
