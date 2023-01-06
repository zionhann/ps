/**
 * @file 5622.cpp
 * @date 2023-01-06
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/5622
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const vector<string> DICT {
    "", "", 
    "ABC", "DEF", "GHI", 
    "JKL", "MNO", "PQRS",
    "TUV", "WXYZ"
};

int Solution(const string& str) {
    int ans = 0;

    for (char c : str) {
        for (int i = 0; i < DICT.size(); ++i) {
            if (DICT[i].find(c) != string::npos) {
                // match
                ans += (i+1);
                break;
            }
        }
    }
    return ans;
}

int main() {
    string s;

    cin >> s;
    cout << Solution(s);
    return 0;
}