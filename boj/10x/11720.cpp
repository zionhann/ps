/**
 * @file 11720.cpp
 * @date 2022-11-14
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11720
 * @time-taken N/A
 * @difficulty B4
 */

#include <iostream>
#include <string>

using namespace std;

int Solution(string& s) {
    int ans = 0;

    for (char c : s) {
        ans += (c-48);
    }
    return ans;
}

int main() {
    string s;
    int _;

    cin >> _ >> s;
    cout << Solution(s);
}