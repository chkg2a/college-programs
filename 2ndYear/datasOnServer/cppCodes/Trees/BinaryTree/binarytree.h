#ifndef MY_BINARYTREE_H
#define MY_BINARYTREE_H

struct TreeNode {
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int value) {
    data = value;
    left = nullptr;
    right = nullptr;
  }
};

class BinaryTree {
public:
  BinaryTree();
  void insert(int value);
  void inOrder();
  void postOrder();
  void preOrder();

private:
  TreeNode *root;

  TreeNode *insertRecursive(TreeNode *node, int value);
  void inOrderRecursive(TreeNode *node);
  void preOrderRecursive(TreeNode *node);
  void postOrderRecursive(TreeNode *node);
};

#endif // !BINARYTREE_H
