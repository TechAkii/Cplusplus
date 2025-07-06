#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void honk() {
        cout << "Beep! Beep!" << endl;
    }
};

int main() {
    Car car1; 
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    car1.honk();

    return 0;
}
