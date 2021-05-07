//
// Created by User on 5/7/2021.
//

#include "leet_88.h"

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    std::vector<int> result;

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            result.push_back(nums1[i++]);
        }
        else
        {
            result.push_back(nums2[j++]);
        }
    }
    if (i != m)
    {
        while (i < m)
        {
            result.push_back(nums1[i++]);
        }
    }
    if (j != n)
    {
        while (j < n)
        {
            result.push_back(nums2[j++]);
        }
    }

    nums1 = result;

}