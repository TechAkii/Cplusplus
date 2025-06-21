#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter number 01: ";
    cin >> num1;

    cout << "Enter number 02: ";
    cin >> num2;

    cout << "Enter number 03: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "The Largest number is " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3) {
        cout << "The Largest number is " << num2 << endl;
    }
    else {
        cout << "The Largest number is " << num3 << endl;
    }

    return 0;
}
