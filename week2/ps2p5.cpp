#include <iostream>
using namespace std;

int main() {

	float price, disc, off, pad;

	cout << "Please enter the price of the item: ";
		cin >> price; 
	cout << "Please enter the discount amount as a decimal: ";
		cin >> disc;
		off = price * disc;
		pad = price - off;
	cout << off << " was discounted off, " << pad << " is the price after discount.";

	return 0;
}