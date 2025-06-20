#include <iostream>

using namespace std;

int main() {
    char grade;
    cout << "Please enter your grade ";
    cin >> grade;


    switch (grade) {
        case 'a':
            cout << "grade";
            break;
        case 'b':
            cout << "good";
            break;
        case 'c':
            cout << "okay";
            break;
        case 'd':
            cout << "fail";
            break;

        default:
            cout << "invalid entry";
    }

return 0;
}
