//
// Created by User on 5/12/2021.
//

#ifndef COBRA_LEETCODE_LEET_384_H
#define COBRA_LEETCODE_LEET_384_H

#include <vector>


class leet_384 {
public:
    leet_384(std::vector<int>);

    /** Resets the array to its original configuration and return it. */
    std::vector<int> reset();

    /** Returns a random shuffling of the array. */
    std::vector<int> shuffle();

private:
    std::vector<int> m_nums;
};

#endif //COBRA_LEETCODE_LEET_384_H