/**
 * @file 1755.cpp
 * @date 2023-01-02
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/1755
 * @time-taken N/A
 * @difficulty S4
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

/**
 * 8 (eight)
 * 5 (five)
 * 4 (four)
 * 9 (nine)
 * 1 (one)
 * 7 (seven)
 * 6 (six)
 * 3 (three)
 * 2 (two)
 * 0 (zero)
 */
const map<int, string> DICT {
    {0, "zero"}, {1, "one"}, {2, "two"},
    {3, "three"}, {4, "four"}, {5, "five"},
    {6, "six"}, {7, "seven"}, {8, "eight"},
    {9, "nine"}
};

string Convert(int val) {
    string str = "";

    while (val != 0) {
        str.insert(0, DICT.at(val%10));
        str += " ";
        val /= 10;
    }
    return str;
}

vector<int> Solution(const int& m, const int& n) {
    vector<int> ans;

    int num = m;

    while (num <= n) {
        ans.push_back(num);
        num++;
    }
    sort(ans.begin(), ans.end(), [](const int& a, const int& b) {
        return Convert(a).compare(Convert(b)) < 0;
    });
    return ans;
}

int main() {
    int counter = 0;
    int m, n;
    
    cin >> m >> n;

    for (int res : Solution(m, n)) {
        if (counter == 10) {
            putchar('\n');
            counter = 0;
        }
        cout << res << ' ';
        counter++;
    }
    return 0;
}