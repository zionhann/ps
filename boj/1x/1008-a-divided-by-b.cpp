#include<iostream>
#include<iomanip>

int main(){

    double a, b;

    std::cin >> a >> b;

    std::cout << std::setprecision(16) << a/b;

    return 0;
}
/*
References

https://boycoding.tistory.com/152
*/