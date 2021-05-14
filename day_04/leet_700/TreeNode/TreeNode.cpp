//
// Created by User on 5/12/2021.
//

#include "TreeNode.h"

TreeNode::TreeNode()
        : m_val{0}
        , m_left{nullptr}
        , m_right{nullptr}
{
}

TreeNode::TreeNode(int x)
        : m_val{x}
        , m_left{nullptr}
        , m_right{nullptr}
{
}

TreeNode::TreeNode(int x, TreeNode* left, TreeNode* right)
        : m_val{x}
        , m_left{left}
        , m_right{right}
{
}