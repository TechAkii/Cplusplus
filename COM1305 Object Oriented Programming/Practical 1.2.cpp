#include <iostream>
#include <string>
using namespace std;

void printCenter(string text, int width) {
    int len = text.length();
    int pos = (width - len) / 2;
    for (int i = 0; i < pos; i++) cout << " ";
    cout << text << endl;
}

int main() {
    string msg = "Welcome to My School Grading System";
    printCenter(msg, 80); 

    string name;
    string subjects[5]; 
    int total = 0, avg = 0,marks[5];

    cout << "What's your name: ";
    cin >> name;

    for (int i = 0; i < 5; i++) {
        cout << "Enter the subject " << (i+1) << ": ";
        cin >> subjects[i];

        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i];
    }

    cout << "\n--- Report for " << name << " ---\n";
    for (int i = 0; i < 5; i++) {
        total += marks[i];
        
    }

    avg = total/5;

    if (avg <= 85)
        cout << "Hi " << name << ". you have obtained the grade: A" << endl;
    else if (avg <= 70)
        cout << "Hi " << name << ". you have obtained the grade: B" << endl;
    else if (avg <= 50)
        cout << "Hi " << name << ". you have obtained the grade: C" << endl;
    else if (avg <= 25)
        cout << "Hi " << name << ". you have obtained the grade: D" << endl;
    else if (avg >= 25)
        cout << "Hi " << name << ". you have obtained the grade: W" << endl;


    return 0;
}
