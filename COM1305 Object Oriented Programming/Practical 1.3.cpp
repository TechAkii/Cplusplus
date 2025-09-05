#include <iostream>
#include <string>

using namespace std;

int main(){

    string symbol;
    int rows;

    cout << "What is the symbol of pattern : " <<endl;
    cin >> symbol;

    cout << "How many rows : " << endl;
    cin >> rows;

    for(int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++) { 
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}