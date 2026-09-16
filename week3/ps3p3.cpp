#include <iostream>
using namespace std;

int main() {

	float meal, tip, total;
	
	cout << "Enter the total cost of your meal: ";
		cin >> meal;

	tip = (meal * .15);
	total = (meal + tip);

	cout << "Your meal costs " << meal << ", the tip is " << tip << ", total cost with tip is " << total; 





}