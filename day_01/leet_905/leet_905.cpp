//
// Created by User on 5/7/2021.
//

#include "leet_905.h"

std::vector<int> sortArrayByParity(std::vector<int>& A) {
    std::vector<int> even;
    std::vector<int> odd;
    for (int a : A) {
        if (a % 2) odd.push_back(a);
        else even.push_back(a);
    }
    even.insert(end(even), begin(odd), end(odd));
    return even;
}