#include <iostream>
using namespace std;

int main() {
    double a, b, c, h;
    bool flag = false;



    cout << "Enter the value of side a: ";
    cin >> a ;


    cout << "Enter the value of side b: ";
    cin >> b;
    cout << "Enter the value of side c: ";
    cin >> c;
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

