//
// Created by alperen on 10.11.2023.
//

#ifndef PA2_TESTUTILS_H
#define PA2_TESTUTILS_H


#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "BlockFall.h"
#include "GameController.h"
#include "Leaderboard.h"

using namespace std;

const char* whitespaces = " \t\n\r\f\v";


// trim from end of string (right)
inline std::string& rtrim(std::string& s, const char* t = whitespaces)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from beginning of string (left)
inline std::string& ltrim(std::string& s, const char* t = whitespaces)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from both ends of string (right then left)
inline std::string& trim(std::string& s, const char* t = whitespaces)
{
    return ltrim(rtrim(s, t), t);
}

vector<string> split(string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

// No empty lines, all lines trimmed
vector<string> split_trim(string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        trim(token);
        if (!token.empty()) {
            res.push_back(token);
        }
    }
    token = s.substr(pos_start);
    trim(token);
    if (!token.empty()) {
        res.push_back(token);
    }
    return res;
}


void print_grid(vector<vector<int>> grid) {
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cerr << grid[i][j];
        }
        cerr << endl;
    }
    cerr << endl;
}
#endif //PA2_TESTUTILS_H
