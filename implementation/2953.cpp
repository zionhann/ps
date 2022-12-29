/**
 * @file 2953.cpp
 * @date 2022-12-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2953
 * @time-taken N/A
 * @difficulty B3
 */
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

const int N = 5;

string Solution(vector<vector<int> >& scores) {
    pair<int, int> mx = make_pair(0, 0);

    for (int i = 0; i < N; ++i) {
        const int sum = accumulate(scores[i].begin(), scores[i].end(), 0);

        mx = (mx.second < sum)
            ? make_pair(i+1, sum)
            : mx;
    }
    return to_string(mx.first) + " " + to_string(mx.second);
}

int main() {
    vector<vector<int> > v(N, vector<int>(N-1));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N-1; ++j) {
            cin >> v[i][j];
        }
    }
    cout << Solution(v);
}