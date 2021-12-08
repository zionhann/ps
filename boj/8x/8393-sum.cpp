#include <iostream>

int main(){
    int n, sum=0;

    std::cin >> n;

    for(int i=0; i< n; i++){
        sum += i+1;
    }

    std::cout << sum;
}
/*
반복문을 사용하지 않는다면?

1 + 2 + 3 + ... + n = n*(n+1)/2

반복문을 사용하면 1부터 N까지 순회하며 더하므로 O(N)의 시간 복잡도,
수열의 합을 이용한다면 O(1)의 시간 복잡도를 지닌다.

즉 수열의 합 공식을 이용하는 알고리즘이 연산 속도가 더 빠르다.
*/