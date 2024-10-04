#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
  int data;
  Node * next;

  Node(int value){
    data = value;
    next = this;
  }
} * List;

void addRear(List& head,int val){
  if(head == NULL){
    head = new Node(val);
  }
  List newNode = new Node(val);
  List temp = head;
  while(temp->next != head){
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->next = head;
}

void displayList(List& head){
  List current = head;
  do{ 
    cout << current->data << "->";
    current = current->next; 
  }while(current != head);
}

void mergeList(List list1, List list2){
  if(list1->next == list1 || list2->next == list2){
    return;
  }
  List temp = list1;
  while(temp->next != list1){
    temp = temp->next;
  }
  temp->next = list2;
  while(temp->next != list2){
    temp = temp->next;
  }
  temp->next = list1;
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();

  List head = NULL;
  List head2 = NULL;
  addRear(head,0);
  addRear(head,10);

  addRear(head2,20);
  addRear(head2,30);

  displayList(head);

  std::cout << std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  auto duration_s = std::chrono::duration_cast<std::chrono::seconds>(end - start);
  std::cout << "Execution time: " << duration_s.count() << " seconds " << std::endl;
  auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "Execution time: " << duration_ms.count() << " milliseconds " << std::endl;
  auto duration_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
  std::cout << "Execution time: " << duration_ns.count() << " nanoseconds ";
  return 0;
}
