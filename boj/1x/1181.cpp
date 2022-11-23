/**
 * @file 1181.cpp
 * @date 2022-11-23
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1181
 * @time-taken N/A
 * @difficulty S5
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Cmp {
    bool operator()(const string& a, const string& b) const {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    }
};

set<string, Cmp> Solution(vector<string>& v) {
    return set<string, Cmp>(v.begin(), v.end());
}

int main() {
    int n;
    vector<string> v;

    cin >> n;
    v.assign(n, "");

    while (n--) {
        cin >> v[n];
    }
    set<string, Cmp> ans = Solution(v);

    for (string s : ans) {
        cout << s << '\n';
    }
    return 0;
}