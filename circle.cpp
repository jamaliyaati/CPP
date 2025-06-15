#include <iostream>
int main() {

    const double PI = 3.14159;
    double radius ;

    std::cout << "enter the radius of the circle: " ;
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    
std::cout << "the circumference of the circle is: " << circumference << '\n';
    return 0;
}

