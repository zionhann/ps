/**
 * @file 1259.cpp
 * @date 2022-11-22
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1259
 * @time-taken N/A
 * @difficulty B1
 */

#include <iostream>
#include <string>
#include <vector>

#define END "0"

using namespace std;

vector<string> Solution(vector<string>& v) {
    vector<string> ans;

    for (string s : v) {
        while (true) {
            if (s.size() == 1 || s.empty()) {
                ans.push_back("yes");
                break;
            }

            if (s.front() != s.back()) {
                ans.push_back("no");
                break;
            }
            s = s.substr(1);
            s.pop_back();
        }
    }
    return ans;
}

int main() {
    vector<string> v;
    string s;
    
    do {
        cin >> s;
        v.push_back(s);
    } while (s != END);

    v.pop_back();
    vector<string> ans = Solution(v);

    for (string s : ans) {
        cout << s << '\n';
    }
    return 0;
}