#include <iostream>
#include <iomanip>
#include <cctype> // for tolower()

using namespace std;

int score = 0;

int main() {
    char name[30], ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;
    int age, choice;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n\n"
         << setw(40) << "QUIZZES FOR KNOWLEDGE\n"
         << setw(39) << "Knowledge is power\n"
         << setw(36) << "Welcome\n\n\n";

    cout << "-> Press 1 to start the game\n"
         << "-> Press 0 to exit the game\n";
    cin >> choice;

    if (choice == 1) {
        cout << "\nThe game has started. You have to answer 10 questions.\n\n";

        cout << "1. Which data type is used to store a single character in C?\n"
             << "   a) int\n   b) float\n   c) char\n   d) string\n"
             << "Answer: ";
        cin >> ans1;
        ans1 = tolower(ans1);
        if (ans1 == 'c') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: c\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "2. What is the correct format specifier for printing an integer in C?\n"
             << "   a) %c\n   b) %d\n   c) %f\n   d) %s\n"
             << "Answer: ";
        cin >> ans2;
        ans2 = tolower(ans2);
        if (ans2 == 'b') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: b\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "3. What function is used to take input from the user in C?\n"
             << "   a) printf()\n   b) scanf()\n   c) input()\n   d) cin\n"
             << "Answer: ";
        cin >> ans3;
        ans3 = tolower(ans3);
        if (ans3 == 'b') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: b\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "4. What happens if you forget to include 'return 0;' in main()?\n"
             << "   a) The program will not compile\n   b) It may cause unexpected behavior\n"
             << "   c) It will crash\n   d) The program runs without issues\n"
             << "Answer: ";
        cin >> ans4;
        ans4 = tolower(ans4);
        if (ans4 == 'b') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: b\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "5. Which symbol is used for a single-line comment in C?\n"
             << "   a) //\n   b) /* */\n   c) #\n   d) --\n"
             << "Answer: ";
        cin >> ans5;
        ans5 = tolower(ans5);
        if (ans5 == 'a') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: a\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "6. What does the sizeof operator return in C?\n"
             << "   a) Memory address of a variable\n   b) Number of elements in an array\n"
             << "   c) Size of a data type in bytes\n   d) Value of a variable\n"
             << "Answer: ";
        cin >> ans6;
        ans6 = tolower(ans6);
        if (ans6 == 'c') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: c\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "7. What is a pointer in C?\n"
             << "   a) A variable that stores an integer\n   b) A special type of array\n"
             << "   c) A variable that stores the memory address of another variable\n   d) A function in C\n"
             << "Answer: ";
        cin >> ans7;
        ans7 = tolower(ans7);
        if (ans7 == 'c') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: c\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "8. What happens if you access an array element beyond its size?\n"
             << "   a) Compilation error\n   b) Runtime error\n"
             << "   c) Undefined behavior\n   d) Program prints 0\n"
             << "Answer: ";
        cin >> ans8;
        ans8 = tolower(ans8);
        if (ans8 == 'c') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: c\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "9. Which header file is required for dynamic memory allocation (malloc/free)?\n"
             << "   a) stdlib.h\n   b) stdio.h\n   c) math.h\n   d) string.h\n"
             << "Answer: ";
        cin >> ans9;
        ans9 = tolower(ans9);
        if (ans9 == 'a') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: a\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "10. What is the correct format specifier for printing a floating-point number in C?\n"
             << "   a) %d\n   b) %c\n   c) %f\n   d) %s\n"
             << "Answer: ";
        cin >> ans10;
        ans10 = tolower(ans10);
        if (ans10 == 'c') {
            cout << "Correct!\n";
            score += 10;
        } else {
            cout << "Wrong! Correct answer: c\n";
        }
        cout << "Current Score: " << score << "\n\n";

        cout << "Game Over!\n";
        cout << "Your Final Score: " << score << "/100\n";
    } else if (choice == 0) {
        cout << "The game has ended.\n";
    } else {
        cout << "Invalid Number!\n";
    }

    return 0;
}
