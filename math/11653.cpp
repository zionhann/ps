/**
 * @file 11653.cpp
 * @date 2023-01-16
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/11653
 * @time-taken N/A
 * @difficulty B1
 */
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<int> Solution(int n) {
    vector<int> ans;

    // init vector
    // if n is 10 then prime_nums.length == 11
    // prime_nums = [-1, -1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    vector<int> prime_nums(n+1, -1);
    iota(begin(prime_nums)+2, end(prime_nums), 2);

    // filter prime number, O(NloglogN)
    for (int i = 2; i <= n; ++i) {
        if (prime_nums[i] == -1) continue;

        for (int j = i+i; j <= n; j += i) {
            prime_nums[j] = -1;
        }
    }

    // O(N)
    int i = 2;

    while ( n / prime_nums[i] != 0) {
        if (prime_nums[i] == -1 || n % prime_nums[i] != 0) {
            i++;
            continue;
        }

        if (n % prime_nums[i] == 0) {
            ans.push_back(prime_nums[i]);
            n /= prime_nums[i];
        }
    }
    return ans;
}

int main() {
    int n;
    
    cin >> n;
    
    for (auto res : Solution(n)) {
        cout << res << '\n';
    }
    return 0;
}