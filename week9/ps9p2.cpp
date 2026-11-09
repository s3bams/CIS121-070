
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculateAverage(double hits, double atBats)
{
    return hits / atBats;
}

int main()
{
    string lastName;
    double hits, atBats, average;
    int count = 0;

    cout << fixed << setprecision(3);

    cout << "Enter last name (Ctrl+Z to stop): ";

    while (cin >> lastName)
    {
        cout << "Enter number of hits: ";
        cin >> hits;

        cout << "Enter at bats: ";
        cin >> atBats;

        if (atBats > 0)
        {
            average = calculateAverage(hits, atBats);

            cout << "Last Name: " << lastName << endl;
            cout << "Batting Average: " << average << endl;

            count++;
        }
        else
        {
            cout << "At bats must be greater than zero." << endl;
        }

        cout << "\nEnter last name (Ctrl+Z to stop): ";
    }

    cout << "\nNumber of Players: " << count << endl;

    return 0;
}
