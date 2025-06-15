#include <iostream>
 int main(){
    int number;

    std::cin >> number;

    int remainder = number % 2 ;
    std::cout << remainder << '\n';
    return 0;
 }