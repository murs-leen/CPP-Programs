// Smart Energy Billing System

#include <iostream>
using namespace std;

int main(){
    int consumerNum, firstDigit;
    float powerUsage, peakHourUsage,pHConsumption, finalBill;
    cout << "Enter 5-digit consumer number: ";
    cin >> consumerNum;

    // Input validation
    if(cin.fail() || consumerNum <= 9999 || consumerNum > 99999){
        cout << "Invalid input! only 5-digit number is allowed.";
        return 1;
    }
    cout << "Enter monthly power usage in kWh: ";
    cin >> powerUsage;
    
    // Input validation
    if(cin.fail() || powerUsage < 0){
        cout << "Invalid input! only 5-digit number is allowed.";
        return 1;
    }
    firstDigit = consumerNum / 10000; // Left most digit 

    switch (firstDigit)
    {

    // Prime number (2, 3, 5, 7)
    case 2:
    case 3:
    case 5:
    case 7:
        if(powerUsage < 300){
            finalBill = powerUsage * 24.4;
            finalBill -= finalBill * (10.0 / 100); 
            cout << "10% discount applied" << endl;
            cout << "Final bill : " << finalBill << endl;
        }
        else if(powerUsage >= 300){
            finalBill = powerUsage * 24.4;
            cout << "No discounts and surcharges:" << endl;
            cout << "Final bill : " << finalBill << endl;
        }
        break;

    // Odd number but not prime (1, 9)
    case 1:
    case 9:
        cout << "Enter your peak-hour consumption in kWh :";
        cin >> peakHourUsage;
        if(cin.fail() || peakHourUsage < 0){
            cout << "Invalid input! peak hour always be a +ve value.";
            return 1;
        }
        if(peakHourUsage > powerUsage){
            cout << "Peak hour can't be greater than monthly power usage.";
            return 0;
        } 
        pHConsumption = (peakHourUsage / powerUsage) * 100;
        if(pHConsumption > 50){
            finalBill = powerUsage * 24.4;
            finalBill += finalBill * (15.0 / 100);
            cout << "15% surcharges applied." << endl;
            cout << "Total bill : " << finalBill << endl;
        }
        else{
            finalBill = powerUsage * 24.4;
            cout << "No discounts or surcharges." << endl;
            cout << "Final bill : " << finalBill << endl;
        }
        break;

    // Even number (4, 6, 8)
    case 0:
    case 4:
    case 6:
    case 8:
        finalBill = powerUsage * 24.4;
        cout << "No discounts or surcharges." << endl;
        cout << "Final bill : "<< finalBill << endl;
        break;
    }
    return 0;
}