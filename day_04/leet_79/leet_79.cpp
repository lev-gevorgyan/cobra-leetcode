//
// Created by User on 5/12/2021.
//

#include "leet_79.h"

bool leet_79::exist(std::vector<std::vector<char>>& board, const std::string& word) {
    if(board.empty()) return false;
    h = board.size();
    w = board[0].size();
    for(int i=0;i<w;i++)
        for(int j=0;j<h;j++)
            if(search(board, word, 0, i, j)) return true;
    return false;
}

bool leet_79::search(std::vector<std::vector<char>>& board, const std::string& word, int d, int x, int y) {
    if(x<0 || x==w || y<0 || y==h || word[d] != board[y][x])
        return false;

    // Found the last char of the word
    if(d==word.length()-1)
        return true;

    char cur = board[y][x];
    board[y][x] = 0;
    bool found = search(board, word, d+1, x+1, y)
                 || search(board, word, d+1, x-1, y)
                 || search(board, word, d+1, x, y+1)
                 || search(board, word, d+1, x, y-1);
    board[y][x] = cur;
    return found;
}