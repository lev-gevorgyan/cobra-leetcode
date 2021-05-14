//
// Created by User on 5/12/2021.
//

#ifndef COBRA_LEETCODE_TREENODE_H
#define COBRA_LEETCODE_TREENODE_H

struct TreeNode {
public:
    TreeNode();
    TreeNode(int x);
    TreeNode(int x, TreeNode *left, TreeNode *right);

    int getVal() {return m_val;}
    TreeNode* getLeft() {return m_left;}
    TreeNode* getRight() {return m_right;}

private:
    int m_val;
    TreeNode* m_left;
    TreeNode* m_right;
};

#endif //COBRA_LEETCODE_TREENODE_H
