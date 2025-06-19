#include <iostream>
using namespace std;

int main() {

        for (int i=1; i<=10; i++) {   /*first statement creates index,
                                       second statement stops the loop,
                                       third statement for increment or decrement of loop*/

                if (i==5) {
                  //  break; stops the loop
                    continue;  // skips the iteration
                }
            cout << i << endl;
        }
    return 0;
}