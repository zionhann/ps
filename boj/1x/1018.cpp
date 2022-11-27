/**
 * @file 1018.cpp
 * @date 2022-11-28
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1018
 * @time-taken N/A
 * @difficulty S4
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define SIZE 8
#define BLACK 'B'
#define WHITE 'W'

using namespace std;

int Solution(const int& n, const int& m, const vector<string>& v) {
    vector<int> cnts;

    for (int row = 0; row <= n-SIZE; ++row) {
        const int range = SIZE + row;

        for (int col = 0; col <= m-SIZE; ++col) {
            vector<string> board;
            int i = row;

            while (i < range) {
                board.push_back(v[i].substr(col, SIZE));
                i++;
            }
            // Do something
            const vector<char> colours = { BLACK, WHITE };

            for (char colour : colours) {
                int cnt = 0;

                for (int i = 0; i < SIZE; ++i) {
                    for (int j = 0; j < SIZE; ++j) {
                        if ((i+j)%2 == 0) {
                            cnt += (colour != board[i][j]);
                            continue;
                        }
                        cnt += (colour == board[i][j]);
                    }
                }
                cnts.push_back(cnt);
            }
        }
    }
    return *min_element(cnts.begin(), cnts.end());
}

int main() {
    int n, m;
    vector<string> v;

    cin >> n >> m;
    v.assign(n, "");

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << Solution(n, m, v);
    return 0;
}