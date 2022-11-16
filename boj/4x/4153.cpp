/**
 * @file 4153.cpp
 * @date 2022-11-17
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/4153
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void Solution(vector<vector<int> >& v) {
    for (auto lines : v) {
        if (pow(lines[0], 2) + pow(lines[1], 2) == pow(lines[2], 2)) {
                cout << "right\n";
                continue;
        }
        cout << "wrong\n";
    }
}

int main() {
    vector<vector<int> > v;
    vector<int> lines(3);

    do {
        cin >> lines[0] >> lines[1] >> lines[2];
        sort(lines.begin(), lines.end());
        v.push_back(lines);
    } while (lines[0]+lines[1]+lines[2] != 0);
    
    v.pop_back();
    Solution(v);
    return 0;
}