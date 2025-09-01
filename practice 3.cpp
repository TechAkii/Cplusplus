#include <iostream>
using namespace std;

int main() {
    // mini calculator
    cout << "Mini Calculator" << endl;

    char op;
    int n;

    cout << "Choose your operator (+, -, *, /): ";
    cin >> op;

    cout << "How many numbers do you want to calculate? ";
    cin >> n;

    double result = 0, num;

    // First number input
    cout << "Enter number 1: ";
    cin >> result;

    // Remaining numbers
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (op == '+') {
            result += num;
        }
        else if (op == '-') {
            result -= num;
        }
        else if (op == '*') {
            result *= num;
        }
        else if (op == '/') {
            if (num == 0) {
                cout << "Error! Division by zero." << endl;
                return 1;
            }
            result /= num;
        }
        else {
            cout << "Error! Invalid operator." << endl;
            return 1;
        }
    }

    cout << "Result = " << result << endl;

    return 0;
}
