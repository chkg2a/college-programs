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
  Node * prev;
} * List;

List initializeNode(){
  List headerNode = new Node;
  headerNode->data = 0; 
  headerNode->prev = nullptr; 
  headerNode->next = nullptr; 
  return headerNode;
}

List getNode(int val){
  List node = new Node;
  node->data = val;
  node->next = nullptr;
  return node;
}

void addRear(List l, int val){
  List node = getNode(val);
  List current = l;
  while(current->next != nullptr){
    current = current->next;
  }
  node->prev = current;
  current->next = node;
}

void displayList(List l){
  if()
  List current = l->next;
  while(current != nullptr){
    cout << current -> data << "->";
    current = current->next;
  }
}

int main (int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();
  cout << "Output : ";
  srand(time(0));

  List bro = initializeNode();
  
  // addRear(bro,10);
  // addRear(bro,20);
  // addRear(bro,30);

  displayList(bro);

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
