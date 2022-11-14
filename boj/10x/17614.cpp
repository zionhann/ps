/**
 * @file 17614.cpp
 * @date 2022-11-14
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/17614
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>

using namespace std;

int ans = 0;

int Solution(int n) {
    if (n == 0) {
        return ans;
    }
    int r = n % 10;

    if (r == 3 || r == 6 || r == 9) {
        ans++;
    }
    return Solution(n/10);
}

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        Solution(i);
    }
    cout << ans;
}