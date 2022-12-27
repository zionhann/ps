/**
 * @file 2577.cpp
 * @date 2022-12-27
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2577
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> Solution(const int a, const int b, const int c) {
    int mul = a * b * c;
    vector<int> counter(10);

    // Parse
    while (mul != 0) {
        counter[mul%10]++;
        mul /= 10;
    }
    return counter;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    for (int num : Solution(a, b, c)) {
        cout << num << '\n';
    }
    return 0;
}