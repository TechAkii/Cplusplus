#include <iostream> 

using namespace std;

float circarea(float rad) {
    const float pi = 22.0f / 7.0f;   
    return pi * rad * rad;           
}

int main() {
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;

    float area = circarea(radius);   
    cout << "Area is: " << area << endl;

    return 0;
}
