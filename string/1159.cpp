/**
 * @file 1159.cpp
 * @date 2022-12-30
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1159
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

string Solution(vector<string>& v) {
    string ans = "";
    map<char, int> map;

    for (auto name : v) {
        map[name.front()]++;
    }

    for (auto pair : map) {
        if (pair.second >= 5) {
            ans += pair.first;
        }
    }
    return (ans.empty())
        ? "PREDAJA"
        : ans;
}

int main() {
    int n;

    cin >> n;
    vector<string> v(n, "");

    while (n--) {
        cin >> v[n];
    }
    cout << Solution(v);
    return 0;
}