/**
 * @file 1085.cpp
 * @date 2022-12-18
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1085
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Solution(int& x ,int & y, int& w, int& h) {
    vector<int> nums;

    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(w-x);
    nums.push_back(h-y);

    return *min_element(nums.begin(), nums.end());
}

int main() {
    int x, y, w, h;

    cin >> x >> y >> w >> h;

    cout << Solution(x, y, w, h);
    return 0;
}