#include <iostream>
#include <string>

using namespace std;

class Account {

private:
    string name;
    long long AcNumber;
    double balance;

public:
    void setdetails(string Name, long long accnum, double Bal) {
        name = Name;
        AcNumber = accnum;
        balance = Bal;
    }

    void withdrawal(double withdrawal_money) {
        if (balance >= withdrawal_money) {
            balance -= withdrawal_money;
            cout << "Withdrawal successful! Your balance is Rs." << balance << endl;
        } else {
            cout << "Not sufficient balance." << endl;
        }
    }

    void deposit(double deposit_money) {
        balance += deposit_money;
        cout << "Deposit successful! Your balance is Rs." << balance << endl;
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << AcNumber << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main() {
    Account acc;
    string name;
    long long accnum;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accnum;

    // Set initial balance to Rs. 20,000
    acc.setdetails(name, accnum, 20000);

    int choice;
    double amount;

    cout << "\nChoose an option:\n1. Deposit\n2. Withdraw\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter deposit amount: ";
        cin >> amount;
        acc.deposit(amount);
    } 
    else if (choice == 2) {
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        acc.withdrawal(amount);
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    // Show account details at the end
    acc.display();

    return 0;
}
