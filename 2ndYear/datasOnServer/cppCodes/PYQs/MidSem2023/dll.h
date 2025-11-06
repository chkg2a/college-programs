#ifndef MYDLL
#define MYDLL

typedef struct Node {
  int data;
  Node *next;
  Node *prev;
} *DList;

DList initializeNode();
bool isEmpty(DList l);
DList getNode(int val);
void addFront(DList l, int val);
void addRear(DList l, int val);
void displayList(DList l);
void destroy(DList l);
void delFront(DList l);
void delRear(DList l);
DList dllFind(DList l, int data);
DList dllAddToLoc(DList l, int data);
DList listMerge(DList A, DList B);
DList listCopy(DList L);
#endif
