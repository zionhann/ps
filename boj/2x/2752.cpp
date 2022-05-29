#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p, q, r, tmp;
    int n = 2;

    cin >> p >> q >> r;
    while (n--) {
        if (p > q) {
            tmp = p;
            p = q;
            q = tmp;
        }
        if (q > r) {
            tmp = q;
            q = r;
            r = tmp;
        }
    }
    cout << p << ' ' << q << ' ' << r;
}