#include <iostream>
using namespace std;
typedef struct Node {
  int data;
  Node *next;
  Node(int val) {
    data = val;
    next = this; // Points to itself to form a circular link
  }
} *List;
void insertEnd(List &head, int data) {
  List newNode = new Node(data);
  if (head == nullptr) {
    head = newNode;
    return;
  }
  List temp = head;
  while (temp->next != head) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->next = head;
}
List mergeTwoLists(List head1, List head2) {
  if (!head1)
    return head2;
  if (!head2)
    return head1;
  List temp1 = head1;
  List temp2 = head2;
  while (temp1->next != head1) {
    temp1 = temp1->next;
  }
  while (temp2->next != head2) {
    temp2 = temp2->next;
  }
  temp1->next = head2;
  temp2->next = head1;
  return head1;
}
void display(List head) {
  if (head == nullptr) {
    cout << "List is empty." << endl;
    return;
  }
  List temp = head;
  do {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);
  cout << "circular" << endl;
}
int main() {
  List head1 = nullptr;
  List head2 = nullptr;
  List head3 = nullptr;
  insertEnd(head1, 1);
  insertEnd(head1, 2);
  insertEnd(head2, 4);
  insertEnd(head2, 5);
  insertEnd(head3, 7);
  insertEnd(head3, 8);
  List mergedList = mergeTwoLists(head1, head2);
  mergedList = mergeTwoLists(mergedList, head3);
  cout << "Merged List: " << endl;
  display(mergedList);
  return 0;
}
