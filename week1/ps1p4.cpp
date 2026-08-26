#include <iostream>
using namespace std; 

int main() {

	float n1, n2, n3;
	float a, m;

	cout << "Please enter an integer ";
		cin >> n1;
	cout << "Please enter another integer ";
		cin >> n2;
	cout << "Please enter another integer ";
		cin >> n3; 

		a = n1 + n2;
		m = a * n3;

		cout << "The sum of the first two integers times the 3rd integer is " << m;

		return 0;
}