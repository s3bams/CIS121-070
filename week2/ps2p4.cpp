#include <iostream>
using namespace std;

int main() {

	float creds, tuit;
	string lastName;

	cout << "Please enter your last name: ";
		cin >> lastName;
	cout << "Please enter the amount of credits taken: ";
		cin >> creds;
		tuit = creds * 250 + 100;
	cout << lastName << "'s tuiton cost is " << tuit;


	return 0;
}