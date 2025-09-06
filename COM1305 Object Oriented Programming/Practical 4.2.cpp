#include <iostream>
#include <string>

using namespace std;

class people {

private:

    string name;
    int age;

public:

    people(string Name, int Age){

        name = Name;
        age = Age;

    }
    void printdetails (){
        cout << "My name is "<< name <<" and I am " << age <<" years old" << endl;
        
    }

};

int main(){

    string NAME;
    int AGE;


    cout << "Enter the name : ";
    cin >> NAME;

    cout << "Enter the age : ";
    cin >> AGE;


    people People(NAME,AGE);
    
    People.printdetails();


    return 0;

}