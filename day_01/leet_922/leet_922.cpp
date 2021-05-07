//
// Created by User on 5/7/2021.
//

#include "leet_922.h"

std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
    int j = 0;
    int k = 1;
    std::vector<int> res = nums;

    for (int i = 0; i < nums.size(); ++i) {
        if (!(nums.at(i) % 2)) {
            res.at(j) = nums.at(i);
            j += 2;
        }
        else {
            res.at(k) = nums.at(i);
            k += 2;
        }
    }

    return res;
}