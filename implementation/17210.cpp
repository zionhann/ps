/**
 * @file 17210.cpp
 * @date 2022-12-29
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/17210
 * @time-taken N/A
 * @difficulty B3
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> Solution(int n, int first) {
    if (n > 5) {
        cout << "Love is open door";
        return vector<int>();
    }
    int curr = !first;
    vector<int> ans;
    
    for (int i = 1; i < n; ++i) {
        ans.push_back(curr);
        curr = !curr;
    }
    return ans;
}

int main() {
    int n, first;

    cin >> n >> first;

    for (int door : Solution(n, first)) {
        cout << door << '\n';
    }
    return 0;
}