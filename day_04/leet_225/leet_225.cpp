//
// Created by User on 5/14/2021.
//

#include "leet_225.h"

void leet_225::push(int x) {
    q_.push(x);
    for (int i = 1; i < q_.size(); ++i) {
        q_.push(q_.front());
        q_.pop();
    }
}

int leet_225::pop() {
    int top = q_.front();
    q_.pop();
    return top;
}

int leet_225::top() {
    return q_.front();
}

bool leet_225::empty() {
    return q_.empty();
}