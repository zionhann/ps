/**
 * @file 1463.cpp
 * @date 2023-01-08
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1463
 * @time-taken N/A
 * @difficulty S3
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> CACHE(1000001);

int Solution(const int& n) {
    if (n == 1) return 0;
    if (CACHE[n] != 0) return CACHE[n];

    CACHE[n] = 1 + Solution(n-1);
    if (n%3 == 0) CACHE[n] = min(CACHE[n], 1 + Solution(n/3));
    if (n%2 == 0) CACHE[n] = min(CACHE[n], 1 + Solution(n/2));

    return CACHE[n];
}

int main() {
    int n;

    cin >> n;
    cout << Solution(n);
    return 0;
}

/**
 * 642 -> 10
 * 933119 -> 30
 * 10 -> 3
 * 16 -> 4
 */