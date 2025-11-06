#include <iostream>

using namespace std;

typedef struct Node {
  int data;
  Node *next;
}* Stack;

void push(Stack &root, int value) {
  Stack newNode = new Node();
  newNode->data = value;
  newNode->next = root;
  root = newNode;
}

int pop(Stack &root) {
  if (root == nullptr) {
    cout << "Stack underflow!\n";
    return -1;
  }
  Stack temp = root;
  int poppedValue = root->data;
  root = root->next;
  delete temp;
  return poppedValue;
}

void display(Stack root) {
  if (root == nullptr) {
    cout << "Stack is empty.\n";
    return;
  }
  Stack current = root;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

int main() {
  Stack root = nullptr;

  push(root, 10);
  push(root, 20);
  push(root, 30);

  cout << "Stack : ";
  display(root);
  
  cout << "After Popping 2 times" << endl;
  pop(root);
  pop(root);

  cout << "Stack : ";
  display(root);

  return 0;
}
