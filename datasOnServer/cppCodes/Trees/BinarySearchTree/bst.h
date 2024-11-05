#ifndef BST_H
#define BST_H

struct Node {
  Node *right;
  int data;
  Node *left;
};

typedef struct Node * BST;

BST addtoTree(BST, int);
void preorderTraversal(BST);
void inorderTraversal(BST);
void postorderTraversal(BST);
BST searchTree(BST, int);
BST inorder_successor(BST);
BST searchParent(BST, int);
void deleteNode(BST, BST);
void destroyTree(BST);

#endif
