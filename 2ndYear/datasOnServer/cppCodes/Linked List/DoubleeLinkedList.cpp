#include <iostream>
using namespace std;

typedef struct Node {
  int data;
  Node *next;
  Node *prev;
} *DList;

DList initializeNode() {
  DList headerNode = new Node;
  headerNode->data = 0;
  headerNode->prev = nullptr;
  headerNode->next = nullptr;
  return headerNode;
}

bool isEmpty(DList l) {
  if (l->next == NULL) {
    return true;
  }
  return false;
}

DList getNode(int val) {
  DList node = new Node;
  node->data = val;
  node->next = nullptr;
  return node;
}

void addFront(DList l, int val) {
  DList node = getNode(val);
  DList head = l;
  node->next = head->next;
  node->prev = head;
  if(head->next != NULL){
    head->next->prev = node;
  }
  head->next = node;
}

void addRear(DList l, int val) {
  DList node = getNode(val);
  DList current = l;
  while (current->next != nullptr) {
    current = current->next;
  }
  node->prev = current;
  current->next = node;
}

void displayList(DList l) {
  if (isEmpty(l)) {
    return;
  }
  DList current = l->next;
  while (current != nullptr) {
    cout << current->data << "<->";
    current = current->next;
  }
}

void destroy(DList l) {
  if (isEmpty(l)) {
    return;
  }
  DList current = l;
  DList nextNode = NULL;

  while (current != NULL) {
    nextNode = current->next;
    delete current;
    current = nextNode;
  }
  l = NULL;
}

void delFront(DList l) {
  if (isEmpty(l)) {
    return;
  }
  DList head = l;
  DList front = l->next;
  if (front->next != NULL) {
    head->next = front->next;
    front->next->prev = head;
  }
  else{
    head->next = NULL;
  }
  delete front;
}

void delRear(DList l) {
  if (isEmpty(l)) {
    return;
  }
  DList current = l;
  while (current->next != NULL) {
    current = current->next;
  }
  current->prev->next = NULL;
  delete current;
}

DList dllFind(DList l, int data){
  if (isEmpty(l)) {
    return NULL;
  }
  DList current = l;
  while (current->next != NULL){
      if(current->data == data){
          return current;
      }
      current = current->next;
  }
  return NULL;
}

DList dllAddToLoc(DList l, int data){
  if (isEmpty(l)) {
    return NULL;
  }
  DList newNode = getNode(data);
  DList current = l;
  newNode->next = current->next;
  current->next = newNode;
  newNode->prev = current;
  if(current->next != NULL){
      current->next->prev = newNode;
  }
  return NULL;
}

DList listMerge(DList A, DList B) {
  if (isEmpty(A) && isEmpty(B)) {
    cerr << "Lists are empty" << endl;
    return nullptr;
  }
  else if (isEmpty(A)) {
    cerr << "Note: List A is empty" << endl;
    return B;
  }
  else if (isEmpty(B)) {
    cerr << "Note: List B is empty" << endl;
    return A;
  }
  else {
    DList temp = A;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = B->next;
    B->next->prev = temp;
    return A;
  }
}

DList listCopy(DList L){
  if (isEmpty(L)) {
    cerr << "List is empty" << endl;
    return nullptr;
  }
  DList newHead = getNode(0);
  
  DList currentNode = L->next;
  while(currentNode != nullptr) {
    addRear(newHead,currentNode->data);
    currentNode = currentNode->next;
  }

  return newHead;
}

int main() {

  DList dl = initializeNode();
  DList dl2 = initializeNode();

  addFront(dl,-10);
  addFront(dl,-20);
  addRear(dl,0);
  addRear(dl,10);
  addRear(dl,20);
  cout << "1st Display\n";
  delFront(dl);
  delRear(dl);
  displayList(dl);
  dllAddToLoc(dllFind(dl,0),5);
  cout << "2nd Display\n";
  displayList(dl);
  destroy(dl);

  return 0;
}
