#include <iostream>
using namespace std;

int main() {

	float weight;

	cout << "Please enter the weight of all metal ";
	cin >> weight;

	if (weight > 100) cout << "For a weight of " << weight << " and at a rate of .50 per pound the total value is " << (weight * .50);
	else if (weight >= 30) cout << "For a weight of " << weight << " and at a rate of .25 per pound the total value is " << (weight * .25);
	else if (weight >= 20) cout << "For a weight of " << weight << " and at a rate of .20 per pound the total value is " << (weight * .20);
	else if (weight < 20) cout << "For a weight of " << weight << " and at a rate of .10 per pound the total value is " << (weight * .10);

	return 0;
}