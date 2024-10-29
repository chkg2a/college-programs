#ifndef BST_H
#define BST_H

typedef struct Node{
    Node * right;
    int data;
    Node * left;
} * BST;

BST addtoTree(BST,int);
void preorderTraversal(BST);
void inorderTraversal(BST);
void postorderTraversal(BST);
BST searchTree(BST,int);
BST inorder_successor(BST);
BST searchParent(BST,int);
void deleteNode(BST,BST);
void deleteNode(BST,int);
void destroyTree(BST);

#endif
