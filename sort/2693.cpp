/**
 * @file 2693.cpp
 * @date 2023-01-06
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2693
 * @time-taken N/A
 * @difficulty B1
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int TARGET_INDEX = 3;
const int VEC_SIZE = 10;

vector<int> Solution(const vector<vector<int> >& vv, const int target_index) {
    vector<int> ans;

    for (auto nums : vv) {
        sort(nums.begin(), nums.end(), greater<int>());
        ans.push_back(nums.at(target_index-1));
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    vector<vector<int> > v(n, vector<int>(VEC_SIZE));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < VEC_SIZE; ++j) {
            cin >> v[i][j];
        }
    }
    
    for (auto res : Solution(v, TARGET_INDEX)) {
        cout << res << '\n';
    }
    return 0;
}