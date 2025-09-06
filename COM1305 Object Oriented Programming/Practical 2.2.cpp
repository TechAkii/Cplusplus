#include <iostream>

using namespace std;


int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int square(int x) {
    return x * x;
}

int main() {
    int x, y, z;

    cout << "Enter three numbers (x, y, z): ";
    cin >> x >> y >> z;

    int result = multiply(square(add(x, y)), z);

    cout << "Result = " << result << endl;

    return 0;
}
