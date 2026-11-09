
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculateMPG(double miles, double gallons)
{
    return miles / gallons;
}

double calculateGasCost(double gallons)
{
    return gallons * 3.50;
}

int main()
{
    string city;
    double miles, gallons;
    double mpg, gasCost;
    double totalGasCost = 0;

    cout << fixed << setprecision(2);

    cout << "Enter destination city (Ctrl+Z to stop): ";

    while (cin >> city)
    {
        cout << "Enter miles traveled: ";
        cin >> miles;

        cout << "Enter gallons used: ";
        cin >> gallons;

        if (gallons > 0)
        {
            mpg = calculateMPG(miles, gallons);
            gasCost = calculateGasCost(gallons);

            cout << "Destination: " << city << endl;
            cout << "Miles Per Gallon: " << mpg << endl;
            cout << "Gas Cost: $" << gasCost << endl;

            totalGasCost += gasCost;
        }
        else
        {
            cout << "Gallons must be greater than zero." << endl;
        }

        cout << "\nEnter destination city (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Gas Cost: $" << totalGasCost << endl;

    return 0;
}
