#include <iostream>
#include <limits>
using namespace std;

int main() {

    int r,c;
    char symbol;

    cout << "Enter rows: ";
    cin >> r;
    while (cin.fail() || r <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a valid response ";
        cin >> r;
    }

    cout << "Enter columns: ";
    cin >> c;
    while (cin.fail() || c <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a valid response ";
        cin >> c;
    }



    while (true) {
        cout << "Enter a single character: ";
        cin >> symbol;

        // Check if we read exactly one char and no extra characters
        if (cin && cin.peek() == '\n') {
            cout << "You entered: " << symbol << endl;
            break;
        } else {
            cout << "Invalid input. Please enter only ONE character." << endl;
            // Clear error flags if any
            cin.clear();
            // Remove everything left in the input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << symbol;
        }
        cout << '\n';
    }








    return 0;
}

