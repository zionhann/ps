/**
 * @file 25377.cpp
 * @date 2022-11-14
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/25377
 * @time-taken N/A
 * @difficulty B4 
 */

#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> KOI;

int Solution(vector<KOI>& time) {
    int ans = -1;

    for (KOI t : time) {
        if (t.first <= t.second) {
            ans = (ans == -1)
                    ? t.second
                    : min(ans, t.second);
        }
    }
    return ans;
}

int main() {
    vector<KOI> v;
    int n;

    cin >> n;
    v.assign(n, make_pair(0, 0));

    while (n--) {
        cin >> v[n].first >> v[n].second;
    }
    cout << Solution(v);
    return 0;
}