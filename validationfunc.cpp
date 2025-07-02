#include <iostream>
#include <sstream>
using namespace std;

double getnum(const std::string &prompt) {

  string input;
  double num;

  while (true) {

    cout << prompt;
    getline(cin, input);
    stringstream ss(input);

    if (ss >> num && ss.eof()) {
      return num;
    } else {
      cout << "Invalid input. Please enter a valid number.\n";
    }
  }
}

int main() {
  double a, b, c, h;
  bool flag = false;

  a = getnum("Enter the value of side a: ");
  b = getnum("Enter the value of side b: ");
  c = getnum("Enter the value of side c: ");

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
  if (flag) {
    cout << "the triangle is a right angle riangle with hyp:" << h << endl;
  } else {
    cout << "its not a right angle triangle" << endl;
  }
}
