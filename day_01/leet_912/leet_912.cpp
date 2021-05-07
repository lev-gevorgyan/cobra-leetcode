//
// Created by User on 5/7/2021.
//

#include <functional>

#include "leet_912.h"

std::vector<int> sortArray(std::vector<int>& nums) {
    std::vector<int> t(nums.size());
    std::function<void(int, int)> mergeSort = [&](int l, int r) {
        if (l + 1 >= r) return;
        int m = l + (r - l) / 2;
        mergeSort(l, m);
        mergeSort(m, r);
        int i1 = l;
        int i2 = m;
        int index = 0;
        while (i1 < m || i2 < r)
            if (i2 == r || (i1 < m && nums[i1] < nums[i2]))
                t[index++] = nums[i1++];
            else
                t[index++] = nums[i2++];
        std::copy(begin(t), begin(t) + index, begin(nums) + l);
    };

    mergeSort(0, nums.size());

    return nums;
}