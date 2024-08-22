#include <chrono>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

typedef struct Node {
  int data;
  struct Node *next;
} *List;

List getNode(int val) {
  List node = new Node;
  node->data = val;
  node->next = NULL;
  return node;
}

void addFront(List l, int val) {
  List node = getNode(val);
  Node *current = l;
  node->next = current->next;
  current->next = node;
}

void addRear(List l, int val) {
  List node = getNode(val);
  Node *current = l;
  while (current->next != nullptr) {
    current = current->next;
  }
  current->next = node;
}

void displayList(List l) {
  List current = l->next;
  while (current->next != nullptr) {
    cout << current->data << ", ";
    current = current->next;
  }
  cout << current->data;
}

bool listEmpty(List l){
  if(l->next == NULL){
    return true;
  }
  return false;
}

List listMerge(List A, List B) {
  if (listEmpty(A) && listEmpty(B)) {
    cerr << "Lists are empty" << endl;
    return nullptr;
  }
  else if (listEmpty(A)) {
    cerr << "Note: List A is empty" << endl;
    return B;
  }
  else if (listEmpty(B)) {
    cerr << "Note: List B is empty" << endl;
    return A;
  }
  else {
    List temp = A;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = B->next;
    return A;
  }
}

List listCopy(List L){
  if (listEmpty(L)) {
    cerr << "Lists is empty" << endl;
    return nullptr;
  }
  List newHead = getNode(0);
  
  List currentNode = L->next;
  while(currentNode->next != nullptr) {
    addRear(newHead,currentNode->data);
    currentNode = currentNode->next;
  }
  addRear(newHead,currentNode->data);

  return newHead;
}

// List listMerge(List A, List B) {
//     List temp = A;
//     while (temp->next != NULL) {
//       temp = temp->next;
//     }
//     temp->next = B->next;
//     return A;
// }
//
// List listCopy(List L){
//   List newHead = getNode(0);
//   
//   List currentNode = L->next;
//   while(currentNode->next != NULL) {
//     addRear(newHead,currentNode->data);
//     currentNode = currentNode->next;
//   }
//   addRear(newHead,currentNode->data);
//
//   return newHead;
// }

int main(int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();
  srand(time(0));

  List l = getNode(0);
  List l2 = getNode(0);
  for (int i = 0; i < 100; i++){
    addRear(l,i);
    addRear(l2,i);
  }
  // List newList = listMerge(l,l2);
  // displayList(newList);

  std::cout << std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  auto duration_s =
      std::chrono::duration_cast<std::chrono::seconds>(end - start);
  std::cout << "Execution time: " << duration_s.count() << " seconds "
            << std::endl;
  auto duration_ms =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "Execution time: " << duration_ms.count() << " milliseconds "
            << std::endl;
  auto duration_ns =
      std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
  std::cout << "Execution time: " << duration_ns.count() << " nanoseconds ";

  return 0;
}
