//
// Created by User on 5/7/2021.
//

#include <unordered_map>

#include "leet_217.h"


bool containsDuplicate(std::vector<int>& nums) {

    std::unordered_map<int, bool> map;

    for (int i = 0; i < nums.size(); i++) {

        if (map.count(nums[i])) {
            return true;
        }
        else {
            map[nums[i]] = true;
        }

    }
    return false;
}