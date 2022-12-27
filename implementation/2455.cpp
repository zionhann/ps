/**
 * @file 2455.cpp
 * @date 2022-12-27
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2455
 * @time-taken N/A
 * @difficulty B3
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> out_in;

int Solution(vector<out_in>& stations) {
    int current = 0, mx = 0;

    for (auto station : stations) {
        current = current + station.second - station.first;
        mx = max(current, mx);
    }
    return mx;
}

int main() {
    vector<out_in> v(4);

    for (int i = 0; i < 4; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    cout << Solution(v);
    return 0;
}