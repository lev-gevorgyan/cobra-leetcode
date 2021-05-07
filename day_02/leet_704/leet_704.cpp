//
// Created by User on 5/7/2021.
//

#include "leet_704.h"

int search(std::vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    if (it == nums.end()) return -1;
    if (*it == target) return it - nums.begin();
    return -1;
}