#include <iostream>
using namespace std;

int total;

void addition (int num1, int num2){
    total = num1 + num2;
    cout << "Result: " << total << endl;
}
void subtraction (int num1, int num2){
    total = num1 - num2;
    cout << "Result: " << total << endl;
}
void multiplication(int num1, int num2){
    total = num1 * num2;
    cout << "Result: " << total << endl;
}
void division (int num1, int num2){
    if (num2 == 0)
        cout << "Error! Division by zero not allowed." << endl;
    else {
        total = num1 / num2;
        cout << "Result: " << total << endl;
    }
}

int main(){
    int n1, n2;
    char symbol;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Enter the symbol (+, -, *, /): ";
    cin >> symbol;

    if (symbol == '+')
        addition(n1,n2);
    else if(symbol == '-')
        subtraction(n1,n2);
    else if(symbol == '*')
        multiplication(n1,n2);
    else if(symbol == '/')
        division(n1,n2);
    else
        cout << "Error! Invalid symbol." << endl;

    return 0;
}
