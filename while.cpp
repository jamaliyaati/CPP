#include <iostream>
#include <limits>

using namespace std;
int main() {
    double a, b, c, h;
    bool flag = false;
        cout << "Enter the value of side a: ";
        cin >> a ;
    while (cin.fail() || a <= 0) {
        cin.clear(); // clear the error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        cout << "Invalid input. Please enter a positive number: ";
        cin >> a;
    }
    cout << "Enter the value of side b: ";
    cin >> b;
    while (cin.fail() || b <= 0) {
        cin.clear(); // clear the error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        cout << "Invalid input. Please enter a positive number: ";
        cin >> b;
    }
    cout << "Enter the value of side c: ";
    cin >> c;
        while (cin.fail() || c <= 0) {
            cin.clear(); // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a positive number: ";
            cin >> c;
        }
    if (a >= b && a >= c) {
        h = a;
        if ((h * h) == (b * b + c * c)) {
            flag = true;
        }
    } else if (b >= a && b >= c) {
        h = b;
        if ((h * h) == (a * a + c * c)) {
            flag = true;
        }
    } else {
        h = c;
        if ((h * h) == (a * a + b * b)) {
            flag = true;
        }
    }
 if(flag){
    cout << "the triangle is a right angle riangle with hyp:" << h << endl;
  } else {
    cout << "its not a right angle triangle" << endl;
  }
}

