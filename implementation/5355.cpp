/**
 * @file 5355.cpp
 * @date 2022-12-30
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/5355
 * @time-taken N/A
 * @difficulty B2
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<double> Solution(vector<string>& cases) {
    vector<double> ans;

    for (auto _case : cases) {
        vector<string> expr;
        size_t pos = 0;

        while ((pos = _case.find(' ')) != string::npos) {
            // reconstructing
            // "12.345 @ #" => ["12.345", "@", "#"]
            expr.push_back(_case.substr(0, pos));
            _case.erase(0, pos+1);
        }
        expr.push_back(_case.substr(0));
        double num = 0;

        for (auto val : expr) {
            try {
                num = stod(val);
            } catch (invalid_argument& _) {
                if (val == "@") num *= 3;
                else if (val == "%") num += 5;
                else if (val == "#") num -= 7;
            }
        }
        ans.push_back(num);
    }
    return ans;
}

int main() {
    int n;
    string str;

    cin >> n;
    cin.ignore();
    vector<string> v(n, "");

    for (int i = 0; i < n; ++i) {
        getline(cin, str);
        v[i] = str;
    }

    for (auto res : Solution(v)) {
        printf("%.2f\n", res);
    }
    return 0;
}