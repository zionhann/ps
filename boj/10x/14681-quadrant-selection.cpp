#include <iostream>

int main(){

    int x, y;

    std::cin >> x >> y;

    std::cout << ((x*y > 0) ? (x > 0) ? 1 : 3 : (x > 0) ? 4 : 2);   

}
/*
    +x +y // quadrant 1
    -x +y // quadrant 2
    -x -y // quadrant 3
    +x -y // quadrant 4

    if( xy > 0 ) quadrant 1 or 3
    if( xy < 0 ) quadrant 2 or 4
    &&
    if( x > 0 ) quadrant 1
    if( x > 0 ) quadrant 4
*/