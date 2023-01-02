/**
 * @file 3059.cpp
 * @date 2023-01-02
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/3059
 * @time-taken N/A
 * @difficulty B3
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> Solution(vector<string>& data) {
    vector<int> ans;

    for (string str : data) {
        int sum = 0;
        char initial_char = 'A';

        while (initial_char <= 'Z') {
            if (str.find(initial_char) == string::npos) {
                sum += int(initial_char);
            }
            initial_char++;
        }
        ans.push_back(sum);
    }
    return ans;
}

int main() {
    int n;
    
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    for (int res : Solution(v)) {
        cout << res << '\n';
    }
    return 0;
}