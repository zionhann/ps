#include <iostream>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    // 3
    cout << a * (b%10) << endl;

    // 4
    cout << (a * ((b%100) - (b%10))) / 10 << endl;

    // 5
    cout << a * (b/100) << endl;
     
    // 6
    cout << a * b << endl;

    return 0;
}
/*
세자리 자연수 b의 각 자리수를 x, y, z라고 하자.
예를 들어 b = 123 일 때 x= 1, y=2, z=3이다.

a * ((b%100) - (b%10))) / 10

 위 식은 다음과 같은 절차를 거쳐 y를 구한다.
 xyz
 yz
 y0
 y

더욱 간결하게 구해보자.

(b/10) % 10
xyz
xy
y
*/