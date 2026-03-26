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
    
    return 0;
}
