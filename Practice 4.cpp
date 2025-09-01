#include <iostream>
using namespace std;

int main() {
    //Guess a number
    int num = 27;   
    int guess_num;

    cout << "Guess a number between 1 to 50: ";
    cin >> guess_num;

    if (guess_num == num) {
        cout << "Your guessing number is correct. Congratulations!" << endl;
    }
    else {
        cout << "Sorry, wrong guess. The correct number was " << num << "." << endl;
    }

    return 0;
}
