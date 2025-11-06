#include <iostream>
using namespace std;

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

BST addtoTree(BST root, int val) {
  if (root == NULL) {
    root = new BSTNode;
    root->data = val;
    root->left = NULL;
    root->right = NULL;
  } else {
    if (val < root->data) {
      root->left = addtoTree(root->left, val);
    } else {
      root->right = addtoTree(root->right, val);
   }
  }
  return root;
}
void preorderTraversal(BST root) {
  if (root) {
    cout << root->data << ' ';
    preorderTraversal(root->left);
    preorderTraversal(root->right);
  }
};
void inorderTraversal(BST root) {
  if (root) {
    inorderTraversal(root->left);
    cout << root->data << ' ';
    inorderTraversal(root->right);
  }
};
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
BST inorder_successor(BST root) {
  BST temp = root->right;
  while (temp && temp->left) {
    temp = temp->left;
  }
  return temp;
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

void deleteNode(BST root, BST node) {
  BST successor, parent;
  if (node->right == NULL && node->left == NULL) {
    parent = searchParent(root, node->data);
    if (parent->left == node) {
      parent->left = NULL;
    } else {
      parent->right = NULL;
    }
    delete node;
  } else if ((node->right == NULL && node->left != NULL) ||
             (node->right != NULL && node->left == NULL)) {
    BST childNode;
    parent = searchParent(root, node->data);
    if (node->right != NULL) {
      childNode = node->right;
    } else {
      childNode = node->left;
    }
    if (parent->right == node) {
      parent->right = childNode;
    } else {
      parent->left = childNode;
    }
    delete node;
  } else {
    successor = inorder_successor(root);
    parent = searchParent(root, successor->data);
    node->data = successor->data;
    deleteNode(parent, successor);
  }
};
void destroyTree(BST root) {
  if (root) {
    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
  }
};

int main() {
  BST root = NULL, searchNode;
  int val, eletobeSearched, eletobeDeleted;
  cout << "\nEnter as many numbers as you want. Enter -99 to stop\n";
  cin >> val;
  while (val != -99) {
    root = addtoTree(root, val);
    cin >> val;
  }
  cout << "\nPreorder Traversal : ";
  preorderTraversal(root);
  cout << "\nInorder Traversal : ";
  inorderTraversal(root);
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

  cout << "\nEnter a number to be deleted from the tree\n";
  cin >> eletobeDeleted;
  searchNode = searchTree(root, eletobeDeleted);
  if (searchNode != NULL) {
    deleteNode(root, searchNode);
    cout << "... After deletion of " << eletobeDeleted
         << " from the current BST... \n";

    cout << "\nPreorder Traversal : ";
    preorderTraversal(root);
    cout << "\nInorder Traversal : ";
    inorderTraversal(root);
    cout << "\nPostorder Traversal : ";
    postorderTraversal(root);
    cout << endl;
  } else {
    cout << eletobeDeleted << " not found in the current BST\n";
  }
  destroyTree(root);
  return 0;
}
