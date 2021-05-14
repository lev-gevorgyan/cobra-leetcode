//
// Created by User on 5/12/2021.
//

#include "leet_1268.h"

std::vector<std::vector<std::string>> suggestedProducts(std::vector<std::string>& products, std::string searchWord) {
    std::sort(products.begin(), products.end());
    std::vector<std::vector<std::string>> res;
    for (int i = 0; i < searchWord.size(); ++ i) {
        std::vector<std::string> candidates;
        for (int j = 0; j < products.size(); ++ j) {
            if (products[j].find(searchWord.substr(0, i + 1)) == 0) {
                if (candidates.size() == 3) break;
                candidates.push_back(products[j]);
            }
        }
        res.push_back(candidates);
    }
    return res;
}