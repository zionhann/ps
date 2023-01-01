/**
 * @file 11656.cpp
 * @date 2023-01-01
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11656
 * @time-taken N/A
 * @difficulty S4
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Solution(string& str) {
    vector<string> ans;
    
    size_t begin = 0;
    const size_t end = str.length();

    while (begin != end) {
        ans.push_back(str.substr(begin, end));
        begin++;
    }
    sort(ans.begin(), ans.end());
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