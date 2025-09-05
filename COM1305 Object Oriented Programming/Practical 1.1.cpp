#include <iostream>
#include <string>

using namespace std;

int main(){

    string name, B_day, Add, Gen, Sch;
    int age;

    cout << "What's your name :"<< endl;
    cin >> name;

    cout << "How old are you :"<< endl;
    cin >> age;

    cout << "When is your Birthday :"<< endl;
    cin >> B_day;

    cout << "What's is your address :"<< endl;
    cin >> Add;

    cout << "What's is your gender :"<< endl;
    cin >> Gen;

    cout << "What's is your school :"<< endl;
    cin >> Sch;

    cout << "My name is " << name << " and I'm " << age << " old. My birthday held on " << B_day << ". My gender is " << Gen <<  ".My address is " << Add << "My school name is "<< Sch << "." << endl;
    
    return 0; 
}