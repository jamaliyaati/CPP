#include <iostream>
using namespace std;
/*
    && = (AND)checks if rwo conditions are true
    || = (OR)checks if one of the conditions is true
     ! = (NOT)reverses the logical state of the operand
*/

int main() {

    double temp;
    cin >> temp;

    if (temp > 0 && temp < 30) {
        cout << "temp is good";

    }else {
        cout << "temp is bad";
    }
    return 0;
}