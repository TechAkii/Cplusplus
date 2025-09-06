#include <iostream>
using namespace std;

int main() {
    const int days = 7;
    const int products = 3;
    int arr[days][products];

    cout << "Enter earnings for 7 days and 3 products:\n";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << " (Item1 Item2 Item3): ";
        for (int j = 0; j < products; j++) {
            cin >> arr[i][j];
        }
    }

    int daily[days];
    for (int i = 0; i < days; i++) {
        daily[i] = 0;
        for (int j = 0; j < products; j++) {
            daily[i] += arr[i][j];
        }
    }

    int product[products] = {0};
    for (int j = 0; j < products; j++) {
        for (int i = 0; i < days; i++) {
            product[j] += arr[i][j];
        }
    }

    int Z = 0;
    for (int i = 0; i < days; i++) {
        Z += daily[i];
    }

    cout << "\nDaily Totals (A, B, C, D, E, F, G):\n";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ": " << daily[i] << endl;
    }

    cout << "\nWeekly totals per product (P, Q, R):\n";
    for (int j = 0; j < products; j++) {
        cout << "Product " << j + 1 << ": " << product[j] << endl;
    }

    cout << "\nGrand total (Z): " << Z << endl;

    return 0;
}
