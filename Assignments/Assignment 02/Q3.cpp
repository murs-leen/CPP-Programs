// FESCO Residential Electricity Bill Calculation

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int unitsConsumed;
    float tax,totalBill;
    cout << fixed << setprecision(3);
    cout << "Enter number of units consumed:";
    cin >> unitsConsumed;
    if (cin.fail() || unitsConsumed < 0){ 
        cout << "Invalid input total consumed units must be +ve integer value." << endl;
        return 1; 
    }
    // Bill calculation
    // 0 - 100
    if (unitsConsumed <= 100)
        totalBill = unitsConsumed * 5.0;
    else if (unitsConsumed <= 300)
        totalBill = (100 * 5.0) + ((unitsConsumed - 100) * 7.0);
    // 301 - 400
    else if (unitsConsumed <= 400)
        totalBill = (100 * 5.0) + (200 * 7.0) + ((unitsConsumed - 300) * 24.40);
    // 401 - 500
    else if (unitsConsumed <= 500)
        totalBill = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + ((unitsConsumed - 400) * 24.91);
    // 501 600
    else if (unitsConsumed <= 600)
        totalBill = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + (100 * 24.91) + ((unitsConsumed - 500) * 26.15);
    // 601 - 700
    else if (unitsConsumed <= 700)
        totalBill = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + (100 * 24.91) + ((unitsConsumed - 600) * 27.59);
    else{
        totalBill = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + (100 * 24.91) + (100 * 27.56)+ ((unitsConsumed - 700) * 40);
    }

    // Total bill (before tax)
    cout << "Total Bill (before tax) :" << totalBill << endl;

    // Tax on total bill
    tax = totalBill * (10.0 / 100);
    cout << "Total tax :" << tax << endl;

    // total bill (afer tax)
    totalBill = totalBill + tax;
    cout << "Total Bill (after tax):" << totalBill << endl;
    return 0;
}
