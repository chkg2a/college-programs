#include <chrono>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class List {
  struct Node {
    int data;
    Node *next;
  };

  Node *head;

public:
  List() {
    head = getNode(0);
  }

  Node *getNode(int val) {
    Node *node = new Node;
    node->data = val;
    node->next = nullptr;
    return node;
  }

  void addFront(int val) {
    Node *node = getNode(val);
    node->next = head->next;
    head->next = node;
  }

  void addRear(int val) {
    Node *node = getNode(val);
    Node *current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = node;
  }

  void displayList(){
    Node * current = head->next;
    while(current->next != nullptr){
      cout << current->data << "->";
      current = current->next;
    }
    cout << current->data;
  }

};

int main(int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();
  cout << "Output : ";
  srand(time(0));

  List bro;

  bro.addFront(0);
  bro.addFront(-10);
  bro.addFront(-20);

  bro.addRear(10);
  bro.addRear(20);
  bro.addRear(30);

  bro.displayList();

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
