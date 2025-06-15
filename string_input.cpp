#include <iostream>
using namespace std;

int main() {

    string full_name;
    int age;
    cout << "Enter your age ";
    cin >> age;

    cout << "Enter full name: "  ;
    getline(cin >> ws ,full_name);
    cout << "your full name is: " << full_name << endl;
    cout << "you are "<< age <<" years old"<<endl;


return 0;
}