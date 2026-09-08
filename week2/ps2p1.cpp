#include <iostream>
using namespace std;

int main(){

	float n1, n2;
	float extPrice;

	cout << "Please enter the quantity of units: ";
		cin >> n1;
	cout << "Please enter the price per unit of these units: ";
		cin >> n2; 
		extPrice = n1 * n2;
		cout << "The extended price of these units is " << extPrice;

		return 0;

}