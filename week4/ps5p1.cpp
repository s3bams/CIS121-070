#include <iostream>
using namespace std; 

int main() {

	string name;
	float grade;

	cout << "Please enter name and grade: ";
	cin >> name >> grade;

	if (grade >= 90) cout << name << "'s grade is an A";
	else if (grade >= 80) cout << name << "'s grade is a B";
	else if (grade >= 70) cout << name << "'s grade is a C";
	else if (grade >= 60) cout << name << "'s grade is a D";
	else if (grade < 60) cout << name << "'s grade is an F";

	return 0;
}