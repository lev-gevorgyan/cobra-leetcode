//
// Created by User on 5/7/2021.
//

#include "leet_344.h"
#include <algorithm>

void reverseString(std::vector<char>& s) {
    for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--) {
        std::swap(s[i], s[j]);
    }
}
