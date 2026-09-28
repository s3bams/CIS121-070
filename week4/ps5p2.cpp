#include <iostream>
using namespace std;

int main() {

	float qty, ppp;

	cout << "Enter the number of pounds of apples: ";
		cin >> qty;

		if (qty > 100) cout << "The price per pound is 10 cents and your total is " << (qty * 0.10);
		else if (qty>=50) cout << "The price per pound is 25 cents and your total is " << (qty * 0.25);
		else if (qty<50) cout << "The price per pound is 50 cents and your total is " << (qty * 0.50);



	return 0;
}