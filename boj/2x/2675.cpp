/**
 * @file 2675.cpp
 * @date 2022-11-14
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2675
 * @time-taken N/A
 * @difficulty B2
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Solution(vector<pair<int, string>>& v) {
    for (auto pair : v) {
        const int& r = pair.first;
        string repeated = "";

        for (char c : pair.second) {
            repeated.append(r, c);
        }
        cout << repeated << '\n';
    }
}

int main() {
    vector<pair<int, string>> v;
    int t;

    cin >> t;
    v.assign(t, {0, ""});

    for (int i = 0; i < t; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    Solution(v);
    return 0;
}