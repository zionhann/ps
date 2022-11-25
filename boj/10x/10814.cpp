/**
 * @file 10814.cpp
 * @date 2022-11-25
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10814
 * @time-taken N/A
 * @difficulty S5
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
typedef pair<int, string> Member;

vector<Member> Solution(vector<Member>& v) {
    stable_sort(v.begin(), v.end(), [](const Member& a, const Member& b) {
        return a.first < b.first;
    });
    return v;
}

int main() {
    int n;

    cin >> n;
    vector<Member> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    vector<Member> ans = Solution(v);

    for (Member m : ans) {
        cout << m.first << ' ' << m.second << '\n';
    }
    return 0;
}