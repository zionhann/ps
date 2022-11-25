/**
 * @file 1978.cpp
 * @date 2022-11-24
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1978
 * @time-taken N/A
 * @difficulty S5
 */
#include <iostream>
#include <vector>

using namespace std;

int Solution(vector<int>& v) {
    int ans = 0;

    for (int n : v) {
        bool is_prime = true;

        for (int i = 2; i < n; ++i) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime && n != 1) {
            ans++;
        }
    }
    return ans;
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