#include <iostream>
using namespace std;

int main() {
    int num, reverse, digit;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        reverse = 0; // reset reverse for each number

        while (num > 0) {
            digit = num % 10;            // get last digit
            reverse = reverse * 10 + digit; // build reverse
            num = num / 10;              // remove last digit
        }

        cout << "Reversed number: " << reverse << endl;
    }

    return 0;
}
