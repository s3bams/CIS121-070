#include <iostream>
using namespace std;

int main() {

	float fixed, ppu,cpu,breakEven;

	cout << "Enter fixed costs: ";
		cin >> fixed;

	cout << "Please enter price per unit and cost per unit: ";
		cin >> ppu >> cpu;

		breakEven = fixed / (ppu - cpu);

		cout << "To break even it will take " << breakEven;

	return 0;
}