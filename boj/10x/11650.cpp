/**
 * @file 11650.cpp
 * @date 2022-11-25
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11650
 * @time-taken N/A
 * @difficulty S5
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int, int> Coord;

vector<Coord> Solution(vector<Coord>& v) {
    sort(v.begin(), v.end());
    return v;
}

int main() {
    int n;

    cin >> n;
    vector<Coord> v(n);

    while (n--) {
        cin >> v[n].first >> v[n].second;
    }
    vector<Coord> ans = Solution(v);

    for (Coord xy : ans) {
        cout << xy.first << ' ' << xy.second << '\n';
    }
    return 0;
}