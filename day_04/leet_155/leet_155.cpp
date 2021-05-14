//
// Created by User on 5/12/2021.
//

#include "leet_155.h"

void leet_155::push(int x) {
    if (s.empty())
    {
        s.push(x);
        mins.push(x);
    }
    else
    {
        s.push(x);
        if (x <= mins.top())
            mins.push(x);
    }
}

void leet_155::pop() {
    if (s.top() == mins.top())
    {
        s.pop();
        mins.pop();
    }
    else
        s.pop();
}

int leet_155::top() { return s.top(); }

int leet_155::getMin() { return mins.top(); }