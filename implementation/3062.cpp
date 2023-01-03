/**
 * @file 3062.cpp
 * @date 2023-01-03
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/3062
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

const string POSITIVE = "YES";
const string NEGATIVE = "NO";

bool IsSymmetry(string str) {
    if (str.length() < 2) {
        return true;
    }
    return (str.front() == str.back())
        ? IsSymmetry(str.substr(1, str.length()-2))
        : false;
}

int Reverse(int num) {
    queue<int> q;
    string reversed = "";

    while (num != 0) {
        q.push(num%10);
        num /= 10;
    }

    while (!q.empty()) {
        reversed += to_string(q.front());
        q.pop();
    }
    return stoi(reversed);
}

vector<string> Solution(vector<int>& nums) {
    vector<string> ans;

    for (int num : nums) {
        string sum = to_string(num + Reverse(num));

        ans.push_back(
            (IsSymmetry(sum))
                ? POSITIVE
                : NEGATIVE
        );
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    for (auto res : Solution(v)) {
        cout << res << '\n';
    }
    return 0;
}