#include <iostream>

int main(){

    int y;

    std::cin >> y;

    std::cout << ((y%4 == 0) ? (y%400 == 0) ? "1" : (y%100 !=0) ? "1" : "0" : "0"); 
}
/*

삼항연산자는 0이면 거짓, 0 이외의 값은 참으로 인식하므로 관계연산자 "=="를 대입하지 않아도 된다.

std::cout << ((y%4) ? "0" : (y%400) ? (y%100) ? "1" : "0" : "1"); 
*/