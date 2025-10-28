#include <iostream>
#include <string>

using namespace std;

int main(){

	string input;
	int uppercase = 0, lowercase=0;
	cout << "Enter a string : " ;
	getline(cin,input);
	
	for(char c : input){
		if(c >= 'A' && c <= 'Z'){
			uppercase++;
		}
		else if(c >= 'a' && c <='z'){
			lowercase++;
		}
		else{
			cout << "Error!";
		}
	}
	
	cout << "Number of uppercase letters: " << uppercase;
	cout << "Number of lowercase letters: " << lowercase;


	return 0;
	
}

