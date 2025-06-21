#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));


    for (int i = 1; i < 6; i++) {
        int number = rand() % 6 + 1;
        cout << number ;
        cout << " ";
    }
    int number = rand() % 6 + 1;
    cout << number << endl;


    return 0;
}