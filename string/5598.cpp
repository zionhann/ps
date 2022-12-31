/**
 * @file 5598.cpp
 * @date 2022-12-31
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/5598
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <string>

using namespace std;

string Solution(const string& str) {
    string ans = "";

    for (auto c : str) {
        if (c == 'A' || c == 'B' || c == 'C') {
            ans += (c+26-3);
            continue;
        }
        ans += (c-3);
    }
    return ans;
}

int main() {
    string s;

    cin >> s;
    cout << Solution(s);
    return 0;
}