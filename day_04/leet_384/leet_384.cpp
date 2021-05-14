//
// Created by User on 5/12/2021.
//

#include <cstdlib>

#include "leet_384.h"

leet_384::leet_384(std::vector<int> nums) {
    m_nums = std::move(nums);
}

std::vector<int> leet_384::reset() {
    return m_nums;
}

std::vector<int> leet_384::shuffle() {
    std::vector<int> output(m_nums);
    const int n = m_nums.size();
    for (int i = 0; i < n - 1; ++i) {
        int j = rand() % (n - i) + i;
        std::swap(output[i], output[j]);
    }
    return output;
}