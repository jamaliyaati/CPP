#include <iostream>
using namespace std;
/*
  1  && = (AND)checks if rwo conditions are true
  2 || = (OR)checks if one of the conditions is true
  3  ! = (NOT)reverses the logical state of the operand
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