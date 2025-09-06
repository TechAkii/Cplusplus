#include <iostream>

using namespace std;

int main(){

    int arr[10] = {3, 2, 4, 5, 6, 4, 9, 7, 8, 1};
    int max = arr[0];
    int min = arr[0];


    for (int i =1; i < 10; i++){

        if(arr[i] >= max)
            max = arr[i];

        if(arr[i] <= min)
            min = arr[i];

    }
    
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;



    return 0;

}