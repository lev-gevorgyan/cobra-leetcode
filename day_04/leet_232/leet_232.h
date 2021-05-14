//
// Created by User on 5/14/2021.
//

#ifndef COBRA_LEETCODE_LEET_232_H
#define COBRA_LEETCODE_LEET_232_H

#include <stack>

class leet_232 {
public:
    /** Push element x to the back of queue. */
    void push(int);

    /** Removes the element from in front of queue and returns that element. */
    int pop();

    /** Get the front element. */
    int peek();

    /** Returns whether the queue is empty. */
    bool empty();
private:
    std::stack<int> s1_;
    std::stack<int> s2_;

    void move();
};

#endif //COBRA_LEETCODE_LEET_232_H