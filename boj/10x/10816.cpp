/**
 * @file 10816.cpp
 * @date 2022-12-04
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10816
 * @time-taken N/A
 * @difficulty S4
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> Solution(vector<int>& nums, vector<int>& targets) {
    unordered_map<int, int> map;
    vector<int> ans;
    
    for (int num : nums) {
        map[num]++;
    }

    for (int target : targets) {
        ans.push_back(map[target]);
    }
    return ans;
}

int main() {
    int n, m;

    cin >> n;
    vector<int> v1(n);

    while (n--) {
        cin >> v1[n];
    }
    cin >> m;
    vector<int> v2(m);

    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }
    
    for (int n : Solution(v1, v2)) {
        cout << n << ' ';
    }
    return 0;
}