#include <iostream>
using namespace std;

int main() {

	float exam1, exam2, firstExam, secExam, total;


	cout << "Please enter your two exam scores: ";
		cin >> exam1 >> exam2 ;

		firstExam = exam1 * .60;
		secExam = exam2 * .40;
		total = firstExam + secExam;

	cout << "Your total exam score is " << total;



}