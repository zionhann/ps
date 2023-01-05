/**
 * @file 14487.cpp
 * @date 2023-01-05
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/14487
 * @time-taken N/A
 * @difficulty B2
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int Solution(vector<int>& v) {
    int sum = accumulate(v.begin(), v.end(), 0);
    return sum - *max_element(v.begin(), v.end());
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << Solution(v);
    return 0;
}