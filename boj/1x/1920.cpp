/**
 * @file 1920.cpp
 * @date 2022-11-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1920
 * @time-taken N/A
 * @difficulty S4
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BinarySearch(const int& n, const vector<int>& nums, const int& lo, const int& hi) {
    if (hi < lo) {
        return 0;
    }
    const int mid = (lo+hi)/2;

    if (n == nums[mid]) {
        return 1;
    } else if (n < nums[mid]) {
        return BinarySearch(n, nums, lo, mid-1);
    } else {
        return BinarySearch(n, nums, mid+1, hi);
    }
}

vector<int> Solution(vector<int>& v, vector<int>& nums) {
    vector<int> ans;
    sort(v.begin(), v.end());

    for (int num : nums) {
        ans.push_back(BinarySearch(num, v, 0, v.size()-1));
    }
    return ans;
}

int main() {
    int n, m;
    vector<int> v1, v2;

    cin >> n;
    v1.assign(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    cin >> m;
    v2.assign(m, 0);

    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }
    vector<int> ans = Solution(v1, v2);

    for (int num : ans) {
        cout << num << '\n';
    }
    return 0;
}