/**
 * @file 2010.cpp
 * @date 2022-12-27
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2010
 * @time-taken N/A
 * @difficulty B3
 */
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int Solution(vector<int>& plugs) {
    return accumulate(plugs.begin(), plugs.end(), 0) - (plugs.size()-1);
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    while (n--) {
        cin >> v[n];
    }
    cout << Solution(v);
    return 0;
}