#include <iostream>
using namespace std;

int main(){

    char name[20],Value;
    int i,marks, total =0, average=0;
    cout << "Welcome to My School Grading System \n";

    cout << "Enter Your Name :";
    cin >> name;

    for (i=1; i<=5; i++){
        cout << "Enter Your Marks : ";
        cin >> marks;
        total += marks;
    }
    average = total / 5;
    cout << "The average of your mark is " << average << endl;

    if (average > 85){
        Value = 'A';
    }
    else if (average > 70){
        Value = 'B';
    }
    else if (average > 50){
        Value = 'C';
    }
    else if (average > 25){
        Value = 'D';
    }
    else{
        Value = 'W';
    }


    cout << "Hi " << name << ",you have obtained the grade: " << Value;

}
