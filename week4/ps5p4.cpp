#include <iostream>
using namespace std;

int main() {

	float annual;

	cout << "Enter your annual salary: ";
	cin >> annual;
	if (annual > 100000) cout << "An annual salary of " << annual << " has a tax rate of 40% and will be taxed " << (annual * .40);
	else if (annual >= 50000) cout << "An annual salary of " << annual << " has a tax rate of 35% and will be taxed " << (annual * .35);
	else if (annual < 50000) cout << "An annual salary of " << annual << " has a tax rate of 25% and will be taxed " << (annual * .25);




	return 0;
}