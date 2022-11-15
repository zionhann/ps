/**
 * @file 8958.cpp
 * @date 2022-11-15
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/8958
 * @time-taken N/A
 * @difficulty B2
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> Solution(vector<string>& v) {
    vector<int> ans;

    for (string s : v) {
        int sum = 0, cnt = 0;

        for (char c : s) {
            switch (c) {
                case 'O':
                    sum += ++cnt;
                    break;
                case 'X':
                    cnt = 0;
                    break;
            }
        }
        ans.push_back(sum);
    }
    return ans;
}

int main() {
    vector<string> v;
    int n;

    cin >> n;
    v.assign(n, "");

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    for (int sum : Solution(v)) {
        cout << sum << '\n';
    }
    return 0;
}