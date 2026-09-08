#include <iostream>
using namespace std;

int main() {

	float n1, n2, area, circum;

	cout << "Please enter the length: ";
		cin >> n1;
	cout << "Please enter the width: ";
		cin >> n2;
		area = n1 * n2;
		circum = 2 * n1 + 2 * n2;
	cout << "The area of the rectangle is " << area << ", the circumference is " << circum;

			return 0;

}