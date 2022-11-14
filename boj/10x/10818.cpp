/**
 * @file 10818.cpp
 * @date 2022-11-14
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10818
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> Solution(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return make_pair(nums.front(), nums.back());
}

int main() {
    int n;
    vector<int> v;
    
    cin >> n;
    v.assign(n, 0);

    while (n--) {
        cin >> v[n];
    }
    auto ans = Solution(v);
    cout << ans.first << ' ' << ans.second;
    return 0;
}