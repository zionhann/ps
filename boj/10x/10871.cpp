#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x;
    int a;

    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < x) cout << a << " ";
    }
}