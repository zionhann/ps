/**
 * @file 3000.cpp
 * @date 2023-01-04
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/9546
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> Solution(vector<int>& nums) {
    vector<int> ans;

    for (int k : nums) {
        int passenger = 0;

        for (int j = 0; j < k; ++j) {
            passenger = 2*passenger + 1;
        }
        ans.push_back(passenger);
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (auto res : Solution(v)) {
        cout << res << '\n';
    }
    return 0;
}