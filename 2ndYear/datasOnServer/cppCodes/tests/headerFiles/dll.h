#ifndef DLINKEDLIST
#define DLINKEDLIST

typedef struct Node {
  Node * next;
  int data;
  Node * prev;
} * DList;

DList dlist_getNode(int);
DList dlist_init();
bool dlist_empty(DList);
void dlist_addFront(DList,int);
void dlist_addRear(DList,int);
void dlist_delFront(DList);
void dlist_delRear(DList);
void dlist_destroy(DList);
void dlist_display(DList);

#endif // !LINKEDLIST
