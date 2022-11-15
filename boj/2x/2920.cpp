/**
 * @file 2920.cpp
 * @date 2022-11-15
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2920
 * @time-taken N/A
 * @difficulty B2
 */

#include <iostream>
#include <vector>

using namespace std;

const int N = 8;

void Solution(vector<int>& v) {
    int given = v.front();
    int expected = given;
    bool asc;

    switch (given) {
        case 1:
            asc = true;
            break;
        case 8:
            asc = false;
            break;
        default:
            cout << "mixed";
            return;
    }

    for (int num : v) {
        if (num != expected) {
            cout << "mixed";
            return;
        }
        expected += (asc) ? 1 : -1; 
    }

    if (asc) {
        cout << "ascending";
    } else {
        cout << "descending";
    }
}

int main() {
    vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    Solution(v);
}