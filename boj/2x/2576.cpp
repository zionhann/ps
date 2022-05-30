#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v;
    int counter = 7;
    int sum = 0;
    int n, min;

    while (counter--) {
        cin >> n; 
        if (n & 1) v.push_back(n);
    }
    if (v.empty()) {
        cout << -1;
    } else {
        min = v.front();

        for (int e : v) {
            if (e < min) min = e;
            sum += e;
        }
    cout << sum << "\n" << min;
    }
}