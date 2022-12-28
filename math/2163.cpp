/**
 * @file 2163.cpp
 * @date 2022-12-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2163
 * @time-taken N/A
 * @difficulty B1
 */
#include <iostream>

using namespace std;

int Solution(int n, int m) {
    return n * m - 1;
}

int main() {
    int n, m;

    cin >> n >> m;
    cout << Solution(n, m);
    return 0;
}