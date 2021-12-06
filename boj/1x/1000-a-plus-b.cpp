#include <iostream>

int main(){

    int a, b;

    std::cin >> a;
    std::cin >> b;

    std::cout << a + b;

    return 0;
}

/*
std::cin >> a;
std::cin >> b;

위 코드는 다음과 같이 표현 가능

std::cin >> a >> b;
*/