#include <iostream>
using namespace std;

int main() {

	float hrs;
	string last, code;

	cout << "Please last name, amount of hours worked and job code (E, J or A) ";
		cin >> last >> hrs >> code;

		if (code == "E") cout << last << " worked " << hrs << " hours at $25.00 and hour and made $" << (hrs * 25);
		else if (code == "J") cout << last << " worked " << hrs << " hours at $20.00 and hour and made $" << (hrs * 20);
		else if (code == "A") cout << last << " worked " << hrs << " hours at $15.00 and hour and made $" <<(hrs * 15);


	return 0;
}