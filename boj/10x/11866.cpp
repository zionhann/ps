/**
 * @file 11866.cpp
 * @date 2022-11-25
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11866
 * @time-taken N/A
 * @difficulty S5
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Join(vector<int>& v, const string& delim) {
    string res;

    for (auto it = v.begin(); it != v.end(); ++it) {
        res += to_string(*it);

        if (next(it) != end(v)) {
            res.append(delim);
        }
    }
    return res;
}

vector<int> Solution(const int& n, const int& k) {
    vector<int> v;

    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }
    vector<int> ans;
    size_t pos = 0;
    
    while (!v.empty()) {
        pos += k-1;
        pos = pos%v.size();
        ans.push_back(v[pos]);
        v.erase(begin(v)+pos);
    }
    return ans;
}

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> ans = Solution(n, k);
    string s = Join(ans, ", ");

    cout << '<';

    for (char c : s) {
        cout << c;
    }
    cout << '>';
}