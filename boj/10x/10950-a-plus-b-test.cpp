#include <iostream>

int main(){
    int n, a, b;

    std::cin >> n;

    int *sum = new int[n];

    for(int i=0; i< n; i++){
        std::cin >> a >> b;
        sum[i] = a+b;
    }
    
    for(int i=0; i< n; i++){
        std::cout << sum[i] << std::endl;
    }
}
/*
while문을 사용해보자

int n, a, b;

std::cin >> n;

while(n--){
    std::cin >> a >> b;
    std::cout << a + b;
}
*/