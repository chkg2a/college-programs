#include "binarytree.h"
#include <iostream>
using std::cout, std::endl;

BinaryTree::BinaryTree() { root = nullptr; }

void BinaryTree::insert(int value) { root = insertRecursive(root, value); }

void BinaryTree::inOrder() {
  inOrderRecursive(root);
  cout << endl;
}

void BinaryTree::preOrder() {
  preOrderRecursive(root);
  cout << endl;
}

void BinaryTree::postOrder() {
  postOrderRecursive(root);
  cout << endl;
}

TreeNode *BinaryTree::insertRecursive(TreeNode *node, int value) {
  if (node == nullptr) {
    return new TreeNode(value);
  }

  if (value < node->data) {
    node->left = insertRecursive(node->left, value);
  } else {
    node->right = insertRecursive(node->right, value);
  }

  return node;
}

void BinaryTree::inOrderRecursive(TreeNode *node) {
  if (node != nullptr) {
    inOrderRecursive(node->left);
    cout << node->data << " ";
    inOrderRecursive(node->right);
  }
}

void BinaryTree::preOrderRecursive(TreeNode *node) {
  if (node != nullptr) {
    cout << node->data << " ";
    preOrderRecursive(node->left);
    preOrderRecursive(node->right);
  }
}

void BinaryTree::postOrderRecursive(TreeNode *node) {
  if (node != nullptr) {
    postOrderRecursive(node->left);
    postOrderRecursive(node->right);
    cout << node->data << " ";
  }
}
