/**
 * @file 11050.cpp
 * @date 2022-11-23
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11050
 * @time-taken N/A
 * @difficulty B1
 */

#include <iostream>

using namespace std;

int fac(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fac(n-1);
}

int Solution(int& n, int& k) {
    return fac(n)/(fac(k)*fac(n-k));
}

int main() {
    int n, k;

    cin >> n >> k;

    cout << Solution(n, k);
    return 0;
}