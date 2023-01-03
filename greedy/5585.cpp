/**
 * @file 5585.cpp
 * @date 2023-01-03
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/5585
 * @time-taken N/A
 * @difficulty B2
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int GIVEN = 1000;
const vector<int> COINS {500, 100, 50, 10, 5, 1};

int Solution(const int& money) {
    int ans = 0;
    int change = GIVEN - money;

    int i = 0;
    while (i != COINS.size()) {
        int num = change / COINS[i];
        
        ans += num;
        change -= (COINS[i] * num);
        if (num == 0) i++;
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    cout << Solution(n);
    return 0;
}