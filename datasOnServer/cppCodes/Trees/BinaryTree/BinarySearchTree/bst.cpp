#include <iostream>
#include "bst.h"

int isEmpty(BST root){
    if(root->right == nullptr && root->left == nullptr){
        return 1;
    }
    return 0;
}

void addLeft(BST root, int data){

}
