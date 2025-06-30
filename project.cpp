#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

  cout << "--------------- S T A R T --------------" << endl;

  double balance = 0.0;
  int choice = 0;

  do {
    cout << "1. Show Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      showbalance(balance);
      break;
    case 2:
      balance += deposit();
      break;
    case 3:
      balance = withdraw(balance);
      break;
    case 4:
      cout << "Exiting..." << endl;
      break;
    default:
      cout << "Invalid choice, please try again." << endl;
    }
  } while (choice != 4);

  cout << "--------------- E N D  --------------" << endl;

  return 0;
}

void showbalance(double balance) {
  cout << "Current Balance: $" << fixed << setprecision(2) << balance << endl;
}

double deposit() {
  double amount;

  cout << "Enter amount to deposit: $";
  cin >> amount;
  while (cin.fail() || amount <= 0) {
    cin.clear(); // clear the error flags
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n'); // discard invalid input
    cout << "Invalid input. Please enter a positive number: ";
    cin >> amount;
  }
  return amount;
}

double withdraw(double balance) {
  double amount;

  cout << "Enter amount to withdraw: $";
  cin >> amount;
  while (cin.fail() || amount <= 0) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Please enter a positive number: ";
    cin >> amount;
  }

  if (amount > balance) {
    cout << "Insufficient funds. Withdrawal cancelled." << endl;
    return balance;
  }

  balance -= amount;
  cout << "Withdrawal successful." << endl;
  return balance;
}
