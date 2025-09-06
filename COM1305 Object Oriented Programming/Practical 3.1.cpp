#include <iostream>
#include<cmath>
using namespace std;

class Circle {
private:
    double radius;  

public:
    
    void setRadius(double r) {
        radius = r;
    }
  
    double calculateArea() {
        const double pi = 22.0/7;
        return pi * pow(radius,2);
    }
   
    void displayArea() {
        cout << "Area of the circle: " << calculateArea() << endl;
    }
};

int main() {
    Circle c;
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    c.setRadius(r);

    c.displayArea();

    return 0;
}
