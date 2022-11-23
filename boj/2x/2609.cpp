/**
 * @file 2609.cpp
 * @date 2022-11-23
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/2609
 * @time-taken N/A
 * @difficulty B1
 */

#include <iostream>
#include <vector>

using namespace std;

pair<int, int> Solution(int& a, int& b) {
    vector<int> v;
    int divisor = 1;

    while (divisor <= a) {
        if (a % divisor == 0) {
            v.push_back(divisor);
        }
        divisor++;
    }
    pair<int, int> ans = make_pair(0, 0);
    int& gcd = ans.first;
    int& lcm = ans.second;

    for (int n : v) {
        if (b % n == 0) {
            gcd = max(gcd, n);
        }
    }
    lcm = a*b/gcd;
    return ans;
}

int main() {
    int a, b;

    cin >> a >> b;

    pair<int, int> ans = Solution(a, b);
    
    cout << ans.first  << '\n' 
         << ans.second << '\n';
}