#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape {
    public:
        virtual void area(){}
};

class Circle : public Shape{
    private:
        double radius;
    
    public:
    const double pi = 22/7;
        Circle ( double r) : radius (r){}
        
        void area() override{
            double area1 = pi * radius * radius;
            cout << "Circle area is : " << area1 << "\n";
        }
};
class Square : public Shape{
    private:
        double side;
    
    public:
        Square ( double s) : side (s){}
        
        void area() override{
            double area2 = side * side;
            cout << "Square area is :" <<area2 << "\n";
        }
};

int main (){
    Square S1(5);
    Circle C1(7);
    S1.area();
    C1.area();
}
