/**
 * @file 1475.cpp
 * @date 2022-12-26
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1475
 * @time-taken N/A
 * @difficulty S5 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Solution(int n) {
    vector<int> counter(10);
    int six_or_nine = 0;

    while (n != 0) {
        // Parse
        const int digit = n % 10;

        if (digit == 6 || digit == 9) six_or_nine++;
        else counter[digit]++;

        n /= 10;
    }
    return max(*max_element(counter.begin(), counter.end()), (six_or_nine/2)+(six_or_nine%2));
}

int main() {
    int n;

    cin >> n;
    cout << Solution(n);
    return 0;
}