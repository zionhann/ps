/**
 * @file 2798.cpp
 * @date 2022-11-21
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2798
 * @time-taken N/A
 * @difficulty B2
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Solution(vector<int>& v, const int& N, const int& M) {
    int mx = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            for (int k = j+1; k < N; ++k) {
                int sum = v[i]+v[j]+v[k];

                if (sum <= M) {
                    mx = max(mx, sum);
                }
            }
        }
    }
    return mx;
}

int main() {
    int N, M;

    cin >> N >> M;

    vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    cout << Solution(v, N, M);
    return 0;
}