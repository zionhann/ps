/**
 * @file 1157.cpp
 * @date 2022-12-30
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1157
 * @time-taken N/A
 * @difficulty B1
 */
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

string Solution(string word) {
    char ans;
    map<char, int> map;

    for (char& c : word) {
        // "Mississipi" => "MISSISSIPI"
        c = toupper(c);
        map[c]++;
    }
    int mx = 0;

    for (auto field : map) {
        if (field.second > mx) {
            ans = field.first;
            mx = field.second;
        }
    }

    return (count_if(map.begin(), map.end(), [mx](pair<char, int> pair) { return pair.second == mx; }) == 1) 
        ? string(1, ans)
        : "?";
}

int main() {
    string str;

    cin >> str;
    cout << Solution(str);
    return 0;
}