/**
 * @file 1427.cpp
 * @date 2023-01-05
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1427
 * @time-taken N/A
 * @difficulty S5
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

 int Solution(int n) {
    vector<int> digits;

    while (n != 0) {
        digits.push_back(n%10);
        n /= 10;
    }
    sort(digits.begin(), digits.end(), greater<int>());
    string ans = "";

    for (int digit : digits) {
        ans += to_string(digit);
    }
    return stoi(ans);
}

int main() {
    int n;

    cin >> n;
    cout << Solution(n);
    return 0;
}