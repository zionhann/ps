/**
 * @file 1292.cpp
 * @date 2023-01-02
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1292
 * @time-taken N/A
 * @difficulty B1
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int Solution(const int& a, const int& b) {
    vector<int> seq;

    int size = 1;

    while (seq.size() < b) {
        for (int i = 0; i < size; ++i) {
            seq.push_back(size);
        }
        size++;
    }
    return accumulate(seq.begin()+(a-1), seq.begin()+b, 0);
}

int main() {
    int a, b;

    cin >> a >> b;
    cout << Solution(a, b);
    return 0;
}