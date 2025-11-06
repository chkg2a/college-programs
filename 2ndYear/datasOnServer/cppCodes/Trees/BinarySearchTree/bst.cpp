#include "bst.h"
#include <iostream>

using std::cout;

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
  if (temp->right) {
    while (temp->left) {
      temp = temp->left;
    }
  }
  return temp;
};

/*BST searchParent(BST root, int val) {*/
/*  BST node, temp1, temp2;*/
/*  node = searchTree(root, val);*/
/*  static BST parent;*/
/*  if (root->data != node->data) {*/
/*    temp1 = root->left;*/
/*    temp2 = root->right;*/
/*    parent = root;*/
/*    if (temp1 && node->data < root->data) {*/
/*      if ((temp1->data) != node->data) {*/
/*        parent = temp1;*/
/*        searchParent(temp1, node->data);*/
/*      } else*/
/*        return parent;*/
/*    } else if (temp2 && node->data >= root->data) {*/
/*      if ((temp2->data) != node->data) {*/
/*        parent = temp2;*/
/*        searchParent(temp2, node->data);*/
/*      } else*/
/*        return parent;*/
/*    } else if (node == root)*/
/*      return NULL;*/
/*  }*/
/*  return parent;*/
/*};*/

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
