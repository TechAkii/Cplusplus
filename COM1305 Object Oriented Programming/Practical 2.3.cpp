#include <iostream>
#include <cmath>
using namespace std;


double power(double n, int p = 2) {
    double answ = pow(n, p);
    return answ;
}

int main() {
    double num, answer;
    int exp;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the exponent (or press 2 to use default 2): ";

    if (cin >> exp) {  
        answer = power(num, exp);
    }

    else {    
        answer = power(num);
    }

    cout << "Answer is " << answer << endl;

    return 0;
}
