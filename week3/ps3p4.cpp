#include <iostream>
using namespace std;

int main() {

	float purch, curr, res;

	cout << "Please enter the purchase price and current price of the stock: ";
		cin >> purch >> curr;

		res = ((curr-purch) / purch)* 100;

		if (curr > purch) cout << "This stock has increased by " << res << "percent" ;
		else cout<< "This stock has decreased by " << -res << "percent";

	return 0;
}