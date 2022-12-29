/**
 * @file 3052.cpp
 * @date 2022-12-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/3052
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int N = 10;

int Solution(vector<int>& nums) {
    set<int> set;

    for (auto num : nums) {
        set.insert(num%42);
    }
    return set.size();
}

int main() {
    vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    cout << Solution(v);
}