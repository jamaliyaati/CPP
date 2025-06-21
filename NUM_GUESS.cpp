#include <iostream>
#include <ctime>
using namespace std;
int main() {


    srand(time(NULL));
    int num;
    int guess;
    int tries = 0;

    num = (rand() % 10) + 1;

    do {
        cout << "enter a number(1-10) : ";
        cin >> guess;
        tries = tries + 1;

        if (guess > num) {
            cout << "guess is greater than the number" << endl;
        }else if (guess < num) {
            cout << "guess is less than the number" << endl;
        }else {
            cout << "Correct answer, it took you " << tries <<" tries"<< endl;
            cout << "the number was: " <<num<<endl;
        }

    }while (guess != num);


    return 0;
}