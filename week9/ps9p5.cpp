
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculateRate(char districtCode)
{
    if (districtCode == 'I' || districtCode == 'i')
        return 250.00;
    else if (districtCode == 'O' || districtCode == 'o')
        return 550.00;
    else
        return 0.00;
}

double calculateTuition(double hours, double rate)
{
    return hours * rate;
}

int main()
{
    string lastName;
    char districtCode;
    double creditHours, rate, tuition;
    double totalTuition = 0;

    cout << fixed << setprecision(2);

    cout << "Enter student last name (Ctrl+Z to stop): ";

    while (cin >> lastName)
    {
        cout << "Enter credit hours: ";
        cin >> creditHours;

        cout << "Enter district code (I or O): ";
        cin >> districtCode;

        rate = calculateRate(districtCode);

        if (rate > 0 && creditHours >= 0)
        {
            tuition = calculateTuition(creditHours, rate);

            cout << "Student Name: " << lastName << endl;
            cout << "Tuition Cost: $" << tuition << endl;

            totalTuition += tuition;
        }
        else
        {
            cout << "Invalid district code or credit hours." << endl;
        }

        cout << "\nEnter student last name (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Tuition: $" << totalTuition << endl;

    return 0;
}
