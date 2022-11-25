/**
 * @file 2751.cpp
 * @date 2022-11-25
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2751
 * @time-taken N/A
 * @difficulty S5
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Solution(vector<int>& v) {
    sort(v.begin(), v.end()); // O(N*logN)
    return v;
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    while (n--) {
        cin >> v[n];
    }
    vector<int> ans = Solution(v);
    
    for (int num : ans) {
        cout << num << '\n';
    }
    return 0;
}