//
// Created by User on 5/12/2021.
//

#ifndef COBRA_LEETCODE_LEET_79_H
#define COBRA_LEETCODE_LEET_79_H

#include <vector>
#include <string>

class leet_79 {
public:
    bool exist(std::vector<std::vector<char>>&, const std::string&);
    bool search(std::vector<std::vector<char>>&, const std::string&, int, int, int);

private:
    int w{0};
    int h{0};
};

#endif //COBRA_LEETCODE_LEET_79_H