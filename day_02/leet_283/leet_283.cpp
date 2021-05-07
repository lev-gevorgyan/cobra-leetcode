//
// Created by User on 5/7/2021.
//

#include "leet_283.h"

void moveZeroes(std::vector<int>& nums) {
    for (int i = 0, j = 0; i < nums.size(); ++i) {
        if (nums[i]) {
            if (i != j) {
                nums[j] = nums[i];
                nums[i] = 0;
            }
            ++j;
        }
    }
}