//
// Created by User on 5/14/2021.
//

#ifndef COBRA_LEETCODE_LEET_225_H
#define COBRA_LEETCODE_LEET_225_H

#include <queue>

class leet_225 {
public:
    /** Push element x onto stack. */
    void push(int);

    /** Removes the element on top of the stack and returns that element. */
    int pop();

    /** Get the top element. */
    int top();

    /** Returns whether the stack is empty. */
    bool empty();
private:
    std::queue<int> q_;
};

#endif //COBRA_LEETCODE_LEET_225_H