#include <iostream>

int main(){

    int a, b;

    std::cin >> a >> b;

    if(a > b){
        std::cout << ">";
    }
    else if(a < b)
        std::cout << "<";
    else
        std::cout << "==";


}
/*
삼항 연산자자를 사용해보자.

std::cout << ((a > b) ? ">" : (a < b) ? "<" : "==");

*/