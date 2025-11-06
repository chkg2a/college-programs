#include <iostream>
using namespace std;

typedef struct Node {
  int data;
  Node *next;
} *List;

List initializeNode(){
  List headerNode = new Node;
  headerNode->data = 0; 
  headerNode->next = nullptr; 
  return headerNode;
}

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
  while (current != nullptr) {
    cout << current->data << "->";
    current = current->next;
  }
}

bool listEmpty(List l){
  if(l->next == NULL){
    return true;
  }
  return false;
}

void delFront(List l){
  if (listEmpty(l)) {
    cerr << "List is empty" << endl;
    return;
  }
  List head = l;
  List firstNode = head->next;
  if (firstNode->next != NULL) {
    head->next = firstNode->next;
  }
  else{
    head->next = NULL;
  }
  delete firstNode;
}

void delRear(List l){
  if (listEmpty(l)) {
    cerr << "List is empty" << endl;
    return;
  }
  List current = l;
  List prev = l;
  while(current->next != NULL){
    prev = current;
    current = current->next;
  }
  prev->next = NULL;
  delete current;
}

void destroy(List l){
  if(listEmpty(l)){
    return;
  }
  List current = l;
  List nextNode = NULL;

  while (current != NULL) {
      nextNode = current->next;
      delete current;
      current = nextNode;
  }
  l = NULL;
}

List listFind(List l, int data){
  if (listEmpty(l)) {
    return NULL;
  }
  List current = l;
  while (current->next != NULL){
      if(current->data == data){
          return current;
      }
      current = current->next;
  }
  return NULL;
}

List listAddToLoc(List l, int data){
  if (listEmpty(l)) {
    return NULL;
  }
  List newNode = getNode(data);
  List current = l;
  newNode->next = current->next;
  current->next = newNode;
  return NULL;
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

int main() {
  List l = initializeNode();
  List l2 = initializeNode();
  for (int i = 0; i < 100; i++){
    addRear(l,i);
    addRear(l2,i);
  }
  for (int i = 0; i < 20; i++){
    delRear(l);
  }
  List newList = listMerge(l,l2);
  displayList(newList);

  destroy(l);
  destroy(l2);
  destroy(newList);

  return 0;
}
