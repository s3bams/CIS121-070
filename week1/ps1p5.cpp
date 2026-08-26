#include <iostream>
using namespace std; 

int main() {

	float n1, n2;
	float sum, prod, diff;

	cout << "Please enter a real number ";
		cin >> n1; 
	cout << "Please enter another real number ";
		cin >> n2; 
		sum = n1 + n2;
		prod = n1 * n2;
		diff = n1 - n2; 
		cout << "The sum of these 2 numbers is " << sum << ", the product of these 2 numbers is " << prod << ", and the difference of these 2 numbers is " << diff; 

		return 0;
}