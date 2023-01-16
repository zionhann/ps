/**
 * @file 10162.cpp
 * @date 2023-01-16
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10162
 * @time-taken N/A
 * @difficulty B4
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> Solution(int t) {
    vector<int> ans;
    const vector<int> btns { 300, 60, 10 };

    for (int btn : btns) {
        ans.push_back(t/btn);
        t %= btn;
    }

    if (t != 0) return vector<int>(1, -1);
    return ans;
}

int main() {
    int n;

    cin >> n;

    for (auto res : Solution(n)) {
        cout << res << ' ';
    }
    return 0;
}