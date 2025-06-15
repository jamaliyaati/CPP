#include <iostream>
using namespace std;
int main() {
    int num1;
    int num2;
    cout << "Please enter a number1: ";
    cin >> num1;
    cout << "Please enter a number2: ";
    cin >> num2;
    cout << endl;
    double num3 = (double)num1/(double)num2 * 100;
    cout << num3 << "%" << endl;

    return 0;
}
