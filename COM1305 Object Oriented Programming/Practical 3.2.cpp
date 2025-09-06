#include <iostream>
#include <string>

using namespace std;

class Guitar{

private:

    string S_Num;

public:

    void setSRnum (string serial_num){

        S_Num = serial_num;

    }

    double price;
    string builder, model, type, Back_wood, top_wood;
    
    void guitar_details(){

        if (S_Num == "GU12")

            cout << "Unit price is RS.19 500.50" 
            << endl << "Builder is Fender." 
            << endl << "Model is Stratocaster." 
            << endl << "Type is Electric." 
            << endl << "Back Wood is Teak." 
            << endl << "Top Wood is Teak." 
            << endl;

        else if(S_Num == "GU45PLM")

            cout << "Unit price is RS.27 200.00" 
            << endl << "Builder is Fender." 
            << endl << "Model is Stratocaster." 
            << endl << "Type is Electric." 
            << endl << "Back Wood is Teak." 
            << endl << "Top Wood is Alder." 
            << endl;

        else if(S_Num == "GU125M")

            cout << "Unit price is RS.22 500.00" 
            << endl << "Builder is Fender." 
            << endl << "Model is Stratocaster." 
            << endl << "Type is Electric." 
            << endl << "Back Wood is Alder." 
            << endl << "Top Wood is Teak." 
            << endl;

        else if(S_Num == "GU245XL")

            cout << "Unit price is RS.33 900.00" 
            << endl << "Builder is Fender." 
            << endl << "Model is Stratocaster." 
            << endl << "Type is Electric." 
            << endl << "Back Wood is Alder." 
            << endl << "Top Wood is Alder." 
            << endl;

        else 

            cout << "Serial Number is wrong." << endl;

    }

};

int main(){

    string snum;

    cout << "Enter the serial number of Guitar :" << endl;
    cin >> snum;

    Guitar g;                 
    g.setSRnum(snum);         
    g.guitar_details();

    return 0;
}