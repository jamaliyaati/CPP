#include <iostream>

using namespace std;

int main() {
    char grade;
    cout << "Please enter your grade ";
    cin >> grade;


    switch (grade) {
        case 'a':
            cout << "monday";
            break;
        case 'b':
            cout << "tuesday";
            break;
        case 'c':
            cout << "wednesday";
            break;
        case 'd':
            cout << "thursday";
            break;

        default:
            cout << "invalid entry";
    }

return 0;
}
