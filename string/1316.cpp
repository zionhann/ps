/**
 * @file 1316.cpp
 * @date 2022-12-31
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1316
 * @time-taken N/A
 * @difficulty S5
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int Solution(vector<string>& words) {
    int ans = 0;

    for (auto word : words) {
        unordered_map<char, int> map;
        bool is_group_word = true;
        char prev = word.front();

        for (char c : word) {
            if (map[c] == -1 && prev != c) {
                is_group_word = false;
                break;
            }
            map[c] = -1;
            prev = c;
        }

        if (is_group_word) {
            ans++;
        }
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
    cout << Solution(v);
    return 0;
}