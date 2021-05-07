//
// Created by User on 5/7/2021.
//

#include <algorithm>

#include "leet_1356.h"

std::vector<int> sortByBits(std::vector<int>& arr) {
    std::sort(begin(arr), end(arr), [](const int a, const int b) {
        int key_a = __builtin_popcount(a);
        int key_b = __builtin_popcount(b);
        if (key_a != key_b) return key_a < key_b;
        return a < b;
    });
    return arr;
}