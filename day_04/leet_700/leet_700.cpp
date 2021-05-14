//
// Created by User on 5/12/2021.
//

#include "leet_700.h"

TreeNode* searchBST(TreeNode* root, int val) {
    if(nullptr == root) return nullptr;

    if(val == root->getVal()) return root;
    if(root->getVal() > val) return searchBST(root->getLeft(), val);
    return searchBST(root->getRight(), val);
}