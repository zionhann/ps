/**
 * @file 1431.cpp
 * @date 2023-01-02
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1431
 * @time-taken N/A
 * @difficulty S3
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define PARSE_INT(a) a - '0'

using namespace std;

int GetSumOf(const string& str) {
    int sum = 0;

    for (char c : str) {
        if (c >= 'A' && c <= 'Z') continue;
        sum += PARSE_INT(c);
    }
    return sum;
}

vector<string> Solution(vector<string> serials) {
    sort(serials.begin(), serials.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            const int sum_a = GetSumOf(a);
            const int sum_b = GetSumOf(b);
            
            return (sum_a == sum_b)
                ? a.compare(b) < 0 // true if a comes before b; false otherwise
                : sum_a < sum_b;
        }
        return a.length() < b.length();
    });
    return serials;
}

int main() {
    int n;

    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (auto res : Solution(v)) {
        cout << res << '\n';
    }
    return 0;
}