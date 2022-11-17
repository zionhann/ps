/**
 * @file 10250.cpp
 * @date 2022-11-18
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10250
 * @time-taken N/A
 * @difficulty B3
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct {
    int height;
    int _;
    int seq;
} Hotel;

vector<int> Solution(vector<Hotel>& v) {
    vector<int> ans;

    for (Hotel hotel : v) {
        int floor, num = 0;
        int nguest;

        while ((nguest = hotel.height * num) < hotel.seq) {
            floor = hotel.seq - nguest;
            num++;
        }
        string s = to_string(floor);
        
        if (num < 10) {
            s.append(1, '0');
        }
        s.append(to_string(num));
        ans.push_back(stoi(s));
    }
    return ans;
}

int main() {
    int t;
    vector<Hotel> v;

    cin >> t;
    v.assign(t, (Hotel){0, 0, 0});

    for (int i = 0; i < t; ++i) {
        cin >> v[i].height >> v[i]._ >> v[i].seq;
    }
    vector<int> ans = Solution(v);

    for (int res : ans) {
        cout << res << '\n';
    }
    return 0;
}