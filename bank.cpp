#include <iostream>
#include <string>

using namespace std;

int main() {
    string accountHolder = "Fatima"; 
    double balance = 1000.0;        

    cout << "--- Simple Bank System ---" << endl;
    cout << "Welcome: " << accountHolder << endl;
    cout << "Your current balance is: $" << balance << endl;
    cout << "--------------------------" << endl;
double deposit;
    cout << "Enter deposit amount: ";
    cin >> deposit;
    balance = balance + deposit;
    cout << "Deposit successful! New balance: $" << balance << endl;
    double withdraw;
    cout << "Enter withdraw amount: ";
    cin >> withdraw;
    
    if (withdraw <= balance) {
        balance = balance - withdraw;
        cout << "Withdraw successful! Remaining: $" << balance << endl;
    } else {
        cout << "Error: Not enough money!" << endl;
    }
    
    return 0;
}
