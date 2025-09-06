#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string position;
    string branch;
    string section;

public:
    // Constructor
    Employee(string n, string p, string b, string s) {
        name = n;
        position = p;
        branch = b;
        section = s;
    }

    // Display details
    void display() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        if (position != "")
            cout << "Position: " << position << endl;
        if (branch != "")
            cout << "Branch: " << branch << endl;
        if (section != "")
            cout << "Section: " << section << endl;
    }
};

int main() {
    // Create objects using constructor
    Employee manager("Akila", "", "", "");                     // Manager – only Name
    Employee asManager("Steffani", "Assistant Manager", "", ""); // Assistant Manager – Name + Position
    Employee brManager("Ranga", "Branch Manager", "Colombo", ""); // Branch Manager – Name + Position + Branch
    Employee emp("Hafila", "Employee", "Kandy", "Finance");      // Employee – Name + Position + Branch + Section

    // Display
    manager.display();
    asManager.display();
    brManager.display();
    emp.display();

    return 0;
}
