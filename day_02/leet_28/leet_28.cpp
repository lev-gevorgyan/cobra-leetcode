//
// Created by User on 5/7/2021.
//

#include "leet_28.h"

int strStr(std::string haystack, std::string needle) {
    int len = needle.size();
    if (haystack.size() < len) return -1;
    for (int idx = 0; idx <= haystack.size() - len; idx++) {
        if (std::string(haystack.begin() + idx, haystack.begin() + idx + len) == needle) return idx;
    }
    return -1;
}