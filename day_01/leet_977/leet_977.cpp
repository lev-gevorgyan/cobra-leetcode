//
// Created by User on 5/7/2021.
//

#include <cmath>

#include "leet_977.h"

std::vector<int> sortedSquares(std::vector<int>& nums) {
    std::vector<int> ans(nums.size());
    auto e = prev(end(nums));
    auto s = begin(nums);
    auto it = end(ans);
    while (--it >= begin(ans)) {
        if (e > s && std::abs(*e) > std::abs(*s))
            *it = std::pow(*e--, 2);
        else
            *it = std::pow(*s++, 2);
    }
    return ans;
}