//
// Created by User on 5/14/2021.
//

#include "leet_232.h"

void leet_232::push(int x) {
    s1_.push(x);
}

int leet_232::pop() {
    if (s2_.empty()) move();
    int top = s2_.top();
    s2_.pop();
    return top;
}

int leet_232::peek() {
    if (s2_.empty()) move();
    return s2_.top();
}

bool leet_232::empty() {
    return s1_.empty() && s2_.empty();
}

void leet_232::move() {
    while (!s1_.empty()) {
        s2_.push(s1_.top());
        s1_.pop();
    }
}