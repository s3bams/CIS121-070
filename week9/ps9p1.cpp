
#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotal(double quantity, double price)
{
    return quantity * price;
}

double calculateDiscount(double total)
{
    double discount;

    if (total > 10000)
        discount = total * 0.10;
    else
        discount = total * 0.05;

    return total - discount;
}

int main()
{
    double quantity, price;
    double total, discountTotal;
    double sumTotal = 0, sumDiscount = 0;

    cout << fixed << setprecision(2);

    cout << "Enter quantity and price (Ctrl+Z to stop): ";

    while (cin >> quantity >> price)
    {
        total = calculateTotal(quantity, price);
        discountTotal = calculateDiscount(total);

        cout << "Total: $" << total << endl;
        cout << "Discount Total: $" << discountTotal << endl;

        sumTotal += total;
        sumDiscount += discountTotal;

        cout << "\nEnter quantity and price (Ctrl+Z to stop): ";
    }

    cout << "\nSum of Totals: $" << sumTotal << endl;
    cout << "Sum of Discount Totals: $" << sumDiscount << endl;

    return 0;
}
