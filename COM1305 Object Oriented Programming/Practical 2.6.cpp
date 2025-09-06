#include <iostream>
#include <string>
#include <algorithm> // for reverse()

using namespace std;

int main() {
    string str;

    // Get input
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse string
    reverse(str.begin(), str.end());

    // Display result
    cout << "Reversed string: " << str << endl;

    return 0;
}
