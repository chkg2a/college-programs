#ifndef LINKEDLIST
#define LINKEDLIST

typedef struct Node {
  Node * next;
  int data;
} * List;

List list_getNode(int);
List list_init();
bool list_empty(List);
void list_addFront(List,int);
void list_addRear(List,int);
void list_delFront(List);
void list_delRear(List);
void list_destroy(List);
void list_display(List);

#endif // !LINKEDLIST
