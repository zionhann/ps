#include <iostream>

int main(){
    int s;

    std::cin >> s;

    s = s / 10;

    if(s > 8) std::cout << "A";

    else if(s == 8) std::cout << "B";

    else if(s == 7) std::cout << "C";

    else if(s == 6) std::cout << "D";

    else 
        std::cout << "F";
}
/*
Conversion Specifier

print("%c", "FFFFFFDCBAA"[s/10]);

*/