/**
 * @file 1267.cpp
 * @date 2022-12-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1267
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Solution(vector<int>& calls) {
    int Y = 0, M = 0;

    for (int call : calls) {
        Y += ((call/30)+1) * 10;
        M += ((call/60)+1) * 15;
    }

    if (Y == M) {
        return "Y M " + to_string(Y);
    } else if (Y < M) {
        return "Y " + to_string(Y);
    } else {
        return "M " + to_string(M);
    }
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    while (n--) {
        cin >> v[n];
    }
    cout << Solution(v);
    return 0;
}