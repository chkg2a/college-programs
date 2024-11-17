#include <iostream>
#include "binarytree.h"
using namespace std;

int main() {
    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);

    cout << "In-order Traversal: ";
    tree.inOrder();

    cout << "Pre-order Traversal: ";
    tree.preOrder();

    cout << "Post-order Traversal: ";
    tree.postOrder();

    return 0;
}
