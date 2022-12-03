/**
 * @file 9012.cpp
 * @date 2022-12-03
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/9012
 * @time-taken N/A
 * @difficulty S4
 */

#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<string> Solution(vector<string>& parentheses) {
    vector<string> ans;

    for (const string& str : parentheses) {
        stack<char> stack;
        bool is_valid = true;

        for (const char& c : str) {
            if (c == ')') {
                if (stack.empty()) {
                    is_valid = false;
                    break;
                }
                stack.pop();
                continue;
            }
            stack.push(c);
        }
        ans.push_back(
          (stack.empty() && is_valid)
            ? "YES"
            : "NO"  
        );
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (string s : Solution(v)) {
        cout << s << '\n';
    }
    return 0;
}