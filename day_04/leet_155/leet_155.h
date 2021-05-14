//
// Created by User on 5/12/2021.
//

#ifndef COBRA_LEETCODE_LEET_155_H
#define COBRA_LEETCODE_LEET_155_H

#include <stack>

class leet_155 {
public:
    void push(int);

    void pop();

    int top();

    int getMin();
private:
    std::stack<int> s;
    std::stack<int> mins;
};

#endif //COBRA_LEETCODE_LEET_155_H