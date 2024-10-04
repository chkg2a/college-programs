#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int value) {
    data = value;
    next = nullptr;
  }
};

void addNode(Node *&head, int value) {
  Node *newNode = new Node(value);

  if (head == nullptr) {
    head = newNode;
    head->next = head;
  } else {
    Node *temp = head;

    while (temp->next != head) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
  }
}

void display(Node *head) {
  if (head == nullptr) {
    cout << "The list is empty." << endl;
    return;
  }
  Node *temp = head;
  do {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);
  cout << endl;
}

void deleteList(Node *&head) {
  if (head == nullptr)
    return;

  Node *current = head;
  Node *nextNode;
  do {
    nextNode = current->next;
    delete current;
    current = nextNode;
  } while (current != head);
  head = nullptr;
}

int main() {
  Node *head = nullptr;

  addNode(head, 1);
  addNode(head, 2);
  addNode(head, 3);
  addNode(head, 4);

  cout << "Circular Linked List: ";
  display(head);

  deleteList(head);

  return 0;
}
