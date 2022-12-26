/**
 * @file 4344.cpp
 * @date 2022-12-26
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/4344
 * @time-taken N/A
 * @difficulty B1
 */
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<double> Solution(vector<vector<int> >& test_cases) {
    vector<double> ans;

    for (auto _case : test_cases) {
        // Get average
        const int size = _case.size();
        const double avg = (double) accumulate(_case.begin(), _case.end(), 0) / size;
        int count = 0;
        
        for (int score : _case) {
            // if each of score exceeds average then count up
            if (avg < score) count++;
        }
        const double ratio = ((double) count / size) * 100;
        ans.push_back(ratio);
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    vector<vector<int> > test_cases(n);

    for (int i = 0; i < n; ++i) {
        int num_score;

        cin >> num_score;
        vector<int> scores(num_score);

        while (num_score--) {
            cin >> scores[num_score];
        }
        test_cases[i] = scores;
    }

    for (auto ratio : Solution(test_cases)) {
        printf("%.3lf%%\n", ratio);
    }
    return 0;
}