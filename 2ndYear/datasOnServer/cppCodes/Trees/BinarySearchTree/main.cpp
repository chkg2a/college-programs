#include <chkg2a/fn_bst.h>
#include <iostream>
using namespace std;
using namespace chk;

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
         << searchNode->val << endl;
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
