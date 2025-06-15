#include <iostream>

using namespace std;
int main() {
    double temp;
    char unit;
    cout << "F for fahrenheit and C for celcius" << endl;

    cout << "enter the unit of temperature to convert to: " ;
    cin >> unit;
    cout << "enter the value: ";
    cin >> temp;

    if (unit == 'F' || unit == 'f') {
        temp = (temp * 1.8) + 32;
        cout << "the temperature is "<<temp <<" degrees fahrenheit"<< endl;
    } else if (unit == 'C' || unit == 'c') {

        temp = (temp - 32) / 1.8;
        cout << "the temperature is "<<temp <<" degree celcius"<< endl;

    }

    return 0;
}

