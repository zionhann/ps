/**
 * @file 10876.cpp
 * @date 2023-01-01
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10867
 * @time-taken N/A
 * @difficulty S5
 */
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> Solution(vector<int>& nums) {
    vector<int> ans;
    set<int> set;

    for (int num : nums) {
        set.insert(num);
    }

    for (int num : set) {
        ans.push_back(num);
    }
    return ans;
}

int main() {
    int n;
    
    cin >> n;
    vector<int> v(n);

    while (n--) {
        cin >> v[n];
    }
    
    for (int num : Solution(v)) {
        cout << num << ' ';
    }
    return 0;
}