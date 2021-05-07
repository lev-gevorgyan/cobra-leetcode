//
// Created by User on 5/7/2021.
//

#include <algorithm>

#include "leet_189.h"


void rotate(std::vector<int>& nums, int k) {
    k %= nums.size();

    std::reverse(nums.begin(),nums.end()-k);
    std::reverse(nums.end()-k,nums.end());
    std::reverse(nums.begin(),nums.end());
}