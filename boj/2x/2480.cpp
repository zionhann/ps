#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    int arr[3];
    int n;

    for (int i = 0; i < 3; i++) {
        cin >> n;
        arr[i] = n;
    }
    sort(arr, arr+3);
    if (arr[0] == arr[1] && arr[1] == arr[2])
        cout << 10000 + arr[0] * 1000;
    else if (arr[0] == arr[1] || arr[1] == arr[2])
        cout << 1000 + arr[1] * 100;
    else
        cout << arr[2] * 100;
}

/**
 * 수를 입력 받아 배열에 저장할 때 
 * 
 * 		cin >> a[0] >> a[1] >> a[2]
 * 		
 * 이런 식으로 바로 배열에 저장할 수 있다.
 */