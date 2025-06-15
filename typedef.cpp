#include <iostream>

typedef std::string text;  //typedef for string
using num = int ;          // same thing but easier syntax

int main() {    

    text firstname = "john";
    num age = 19;
    
    std::cout << firstname << '\n';
    std::cout << age <<'\n';
    return 0;
} 

