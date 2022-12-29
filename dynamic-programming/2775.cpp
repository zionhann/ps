/**
 * @file 2775.cpp
 * @date 2022-12-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2775
 * @time-taken N/A
 * @difficulty B1
 */
#include <iostream>
#include <vector>

using namespace std;

int dp(int k, int n, vector<vector<int> >& cache) {
    if (k == 0) return n;
    if (n == 0) return 0;
    if (cache[k][n] != -1) return cache[k][n];

    return cache[k][n] = dp(k-1, n, cache) + dp(k, n-1, cache);
}

vector<int> Solution(vector<pair<int, int> >& addrs) {
    vector<vector<int> > cache(15, vector<int>(15, -1));
    vector<int> ans;
     
    for (auto addr : addrs) {
        ans.push_back(dp(addr.first, addr.second, cache));
    }
    return ans;
}

int main() {
    int t;

    cin >> t;
    vector<pair<int, int> > v(t);

    for (int i = 0; i < t; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for (int num : Solution(v)) {
        cout << num << '\n';
    }
    return 0;
}