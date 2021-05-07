//
// Created by User on 5/7/2021.
//

#include "leet_944.h"

int minDeletionSize(std::vector<std::string>& strs) {
    int cnt = 0;
    int x = strs.size();
    int y = strs[0].size();
    for (int i = 0; i < y; ++i) {
        for (int j = 1; j < x; ++j) {
            if (strs[j][i] < strs[j - 1][i]) {
                ++cnt;
                break;
            }
        }
    }
    return cnt;
}