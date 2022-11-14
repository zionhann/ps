/**
 * @file 2562.cpp
 * @date 2022-11-14
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2562
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>
#include <vector>

using namespace std;

const int N = 9;

pair<int, int> Solution(vector<int>& nums) {
    const int size = nums.size();
    int index = 1, max = nums.front();

    for (int i = 1; i < size; ++i) {
        if (max < nums[i]) {
            index = i + 1;
            max = nums[i];
        }
    }
    return make_pair(max, index);
}

int main() {
    vector<int> v (N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    auto ans = Solution(v);
    cout << ans.first << '\n' << ans.second;
}