#ifndef BST_H
#define BST_H

struct BSTNode {
  BSTNode *right;
  int data;
  BSTNode *left;
};

typedef struct BSTNode * BST;

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
