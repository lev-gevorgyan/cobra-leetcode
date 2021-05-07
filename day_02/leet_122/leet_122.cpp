//
// Created by User on 5/7/2021.
//

#include "leet_122.h"

int maxProfit(std::vector<int>& prices) {
    int total = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i-1]) {
            total += prices[i] - prices[i-1];
        }
    }

    return total;
}