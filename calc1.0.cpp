#include <iostream>
using namespace std;

    int main() {

        char op;
        double num1, num2, result;

        cout << "*********************CALC*********************" << endl;
        cout << "Enter an operand:(+  _  /  *) ";
        cin >> op;
        cout << "enter the first number: ";
        cin >> num1;
        cout << "enter the second number: ";
        cin >> num2;

        switch (op) {
                case '+':
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case '-':
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case '*':
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case '/':
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
                    break;
                default:
                cout << "wrong input." << endl;
        }
        cout << "*********************CALC*********************" ;
        return 0;
    }
