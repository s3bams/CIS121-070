#include <iostream>
using namespace std;

int main() {

	float stockPrice, stockQuant, stockValue;

	cout << "Please enter the price of the current stock and the quantity of stock: ";
		cin >> stockPrice >> stockQuant;
		stockValue = stockPrice * stockQuant;
	cout << "The value of the stock in your portfolio is " << stockValue;

	return 0;
}