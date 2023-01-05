/**
 * @file 2822.cpp
 * @date 2023-01-05
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2822
 * @time-taken N/A
 * @difficulty S5
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int N = 8;

pair<int, vector<int> > Solution(vector<int> v) {
    vector<pair<int, int> > pairs;

    for (int i = 0; i < v.size(); ++i) {
        pairs.push_back({v[i], i+1});
    }
    
    // Sort score of problems in descending order
    sort(pairs.begin(), pairs.end(), [](const pair<int, int> a, const pair<int, int> b) {
        return a.first > b.first;
    });


    // Calculate sum of scores
    int sum = 0;

    for (auto it = pairs.begin(); it < pairs.begin()+5; ++it) {
        sum += (*it).first;
    }

    // Sort index of problems in ascending order
    sort(pairs.begin(), pairs.begin()+5, [](const pair<int, int> a, const pair<int, int> b) {
        return a.second < b.second;
    });
    // Top 5
    pairs.erase(pairs.begin()+5, pairs.end());

    vector<int> indices;

    for (auto pair : pairs) {
        indices.push_back(pair.second);
    }
    return make_pair(sum, indices);
}

int main() {
    vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    pair<int, vector<int> > ans = Solution(v);
    cout << ans.first << '\n';
    
    for (auto res : ans.second) {
        cout << res << ' ';
    }
    return 0;
}