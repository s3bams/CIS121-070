
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculateRate(char jobCode)
{
    if (jobCode == 'L' || jobCode == 'l')
        return 25.00;
    else if (jobCode == 'A' || jobCode == 'a')
        return 30.00;
    else if (jobCode == 'J' || jobCode == 'j')
        return 50.00;
    else
        return 0.00;
}

double calculateGrossPay(double hours, double rate)
{
    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main()
{
    string lastName;
    char jobCode;
    double hours, rate, grossPay;
    double totalGrossPay = 0;

    cout << fixed << setprecision(2);

    cout << "Enter last name (Ctrl+Z to stop): ";

    while (cin >> lastName)
    {
        cout << "Enter job code (L, A, or J): ";
        cin >> jobCode;

        cout << "Enter hours worked: ";
        cin >> hours;

        rate = calculateRate(jobCode);

        if (rate > 0 && hours >= 0)
        {
            grossPay = calculateGrossPay(hours, rate);

            cout << "Last Name: " << lastName << endl;
            cout << "Gross Pay: $" << grossPay << endl;

            totalGrossPay += grossPay;
        }
        else
        {
            cout << "Invalid job code or hours." << endl;
        }

        cout << "\nEnter last name (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Gross Pay: $" << totalGrossPay << endl;

    return 0;
}
