/**
 * @file 11721.cpp
 * @date 2022-12-31
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11721
 * @time-taken N/A
 * @difficulty B3
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Solution(string& s) {
    vector<string> ans;

    while(!s.empty()) {
        ans.push_back(s.substr(0, 10));
        s.erase(0, 10);
    }
    return ans;
}

int main() {
    string s;

    cin >> s;
    
    for (auto str : Solution(s)) {
        cout << str << '\n';
    }
    return 0;
}