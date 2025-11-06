#ifndef BST_H
#define BST_H

typedef struct Node{
    Node * right;
    int data;
    Node * left;

    Node(int val){
        right = nullptr;
        data = val;
        left = nullptr;
    }
} * BST;

void addRight(BST,int);
void addLeft(BST,int);
int isEmpty(BST);
void display(BST);

#endif
