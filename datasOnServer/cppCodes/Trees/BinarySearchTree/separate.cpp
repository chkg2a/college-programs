#include <iostream>
using namespace std;

struct BSTNode {
  BSTNode *right;
  int data;
  BSTNode *left;
};

typedef struct BSTNode * BST;

BST insert(BST, int);
void postorderTraversal(BST);
BST searchTree(BST, int);
BST searchParent(BST, int);

BST insert(BST root, int val) {
  if (root == NULL) {
    root = new BSTNode;
    root->data = val;
    root->left = NULL;
    root->right = NULL;
  } else {
    if (val < root->data) {
      root->left = insert(root->left, val);
    } else {
      root->right = insert(root->right, val);
   }
  }
  return root;
}
void postorderTraversal(BST root) {
  if (root) {
   postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << ' ';
  }
};
BST searchTree(BST root, int val) {
  if (root == NULL) {
    return NULL;
  }
  if (val < root->data) {
    return searchTree(root->left, val);
  } else if (val > root->data) {
    return searchTree(root->right, val);
  } else {
    return root;
  }
};

BST searchParent(BST root, int val) {
  if (root == NULL || root->data == val) {
    return NULL;
  }
  if ((root->left && root->left->data == val) ||
      (root->right && root->right->data == val)) {
    return root;
  }
  if (val < root->data) {
    return searchParent(root->left, val);
  } else {
    return searchParent(root->right, val);
  }
}

int main() {
  BST root = NULL, searchNode;
  int val, eletobeSearched, eletobeDeleted;
  cout << "\nEnter as many numbers as you want. Enter -99 to stop\n";
  cin >> val;
  while (val != -99) {
    root = insert(root, val);
    cin >> val;
  }
  cout << "\nPostorder Traversal : ";
  postorderTraversal(root);

  cout << "\nEnter a number whose parent is to be serached\n";
  cin >> eletobeSearched;
  searchNode = searchParent(root, eletobeSearched);
  if (searchNode) {
    cout << eletobeSearched << "'s parent is the node containing "
         << searchNode->data << endl;
  } else {
    cout << eletobeSearched << "'s parent not found\n";
  }

  return 0;
}
