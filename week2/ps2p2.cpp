#include <iostream>
using namespace std;

int main() {

	float  hrs, pph, grossPay;
	string lastName;


	cout << "Please enter last name: ";
		cin >> lastName;
	cout << "Please enter hours worked: ";
		cin >> hrs;
	cout << "Please enter hourly pay: ";
	cin >> pph;

		grossPay = hrs * pph;
	cout << lastName << "'s gross pay is " << grossPay; 

}