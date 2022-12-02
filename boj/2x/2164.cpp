/**
 * @file 2164.cpp
 * @date 2022-12-02
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2164
 * @time-taken N/A
 * @difficulty S4
 */

#include <iostream>
#include <queue>

using namespace std;

int Solution(const int& n) {
    queue<int> q;

    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }

    while (q.size() != 1) {
        q.pop();

        q.push(q.front());
        q.pop();
    }
    return q.front();
}

int main() {
    int n;

    cin >> n;
    cout << Solution(n);
    return 0;
}