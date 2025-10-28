#include<iostream>
#include<string>

using namespace std;

class Student{
private:
	string name;
	int array[5];
	
public:
	double average = 0.0;
	Student(string Name, int arr[5]){
		name = Name;
		for (int i = 0; i < 5; i++) {
            array[i] = arr[i]; 
        }
	}
	
	void calculateAverage(){
		int total =0;
		for(int i =1; i < 5; i++){
		total += array[i];
		}
		 average = (double)total/5;
	}
	void  display(){
		cout << "Student Name : " << name << endl;
		cout << "Average marks : " << average << endl;
	}
};

int main(){
	int ar[5]= {80, 75, 90, 85, 88};
	Student s1("Namal", ar);
	s1.calculateAverage();
	s1.display();
	return 0;
}

