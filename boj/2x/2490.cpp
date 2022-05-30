#include <iostream>
#include <vector>

using namespace std;

enum Yut { D, C, B, A, E };

int main(void) {
    int n;
    int counter = 0;
    vector<int> v;

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 4; i++) {
            cin >> n;
            counter += n;
        }
        v.push_back(counter);
        counter = 0;
    }
    for (int counter : v) {
        switch (counter) {
            case A: cout << "A\n"; break;
            case B: cout << "B\n"; break;
            case C: cout << "C\n"; break;
            case D: cout << "D\n"; break;
            case E: cout << "E\n"; break;
        }
    }
}