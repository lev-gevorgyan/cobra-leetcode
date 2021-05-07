//
// Created by User on 5/7/2021.
//

#include <algorithm>

#include "leet_1752.h"

bool check(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> b = nums;
    std::sort(b.begin(), b.end());

    for(int i = 0; i < n; ++i)
    {
        if(nums == b) return true;
        int t = nums[0];
        for(int j = 1; j < n; ++j)
            nums[j - 1] = nums[j];
        nums.back() = t;
    }
    return false;
}