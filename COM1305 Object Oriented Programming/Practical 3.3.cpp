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
            cout << "Your balance is Rs." << balance << endl;
        } 

        else {
            cout << "Not sufficient balance." << endl;
        }

    }


    void deposit(double deposit_money) {

        balance += deposit_money;
        cout << "Your balance is Rs." << balance << endl;

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
    double initial_balance;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accnum;

    cout << "Enter initial balance: ";
    cin >> initial_balance;

    acc.setdetails(name, accnum, initial_balance);

    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Account\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                acc.withdrawal(amount);
                break;
            case 3:
                acc.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
