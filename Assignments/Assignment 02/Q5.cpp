// Create a C++ program that assesses an individual's
//  qualification for a personal loan

#include <iostream>
using namespace std;
int main()
{
    float annualIncome, debitToIncomeRatio;
    int creditScore, empDuration;

    // Take annual income
    cout << "Enter your annual income: ";
    cin >> annualIncome;
    if (cin.fail() || annualIncome < 0){ // input validation
        cout << "Your annual income must be a +ve integer value" << endl;
        return 1;
    }
    if (annualIncome < 1500000){ // for insufficient annual income
        cout << endl;
        cout << "You'r ineligible as your annual income is too low." << endl;
        return 0;
    }
    // Take credit score
    cout << "Enter your credit score: ";
    cin >> creditScore;
    if (cin.fail() || creditScore < 0){ // input validation
        cout << "Your credit score must be +ve integer value" << endl;
        return 1;
    }
    if (creditScore <= 700){ // for insufficient credit score
        cout << endl;
        cout << "You'r ineligible as your credit score is too low." << endl;
        return 0;
    }
    // Take Debit-to-income ratio
    cout << "Enter your debit-to-income ratio: ";
    cin >> debitToIncomeRatio;
    if (cin.fail() || debitToIncomeRatio < 0){ // input validation
        cout << "Your Debit-to-income ratio must be a +ve integer value" << endl;
        return 1;
    }
    if(debitToIncomeRatio > 35){
        cout << endl;
        cout << "You'r Debit-to-income ratio is too high. So you'r ineligible." << endl;
        return 0;
    }
    // Employment status
    cout << "Enter your employment duration (years)" << endl;
    cout << "e.g for 2 years write 2, 3 years write 3: ";
    cin >> empDuration;
    if (cin.fail() || empDuration < 0){ // input validation
        cout << "Invalid input!" << endl;
        return 1;
    }
    if(empDuration < 2){
        cout << endl;
        cout << "Insufficient employment duration.So you'r ineligible for loan." << endl;
        return 0;
    }

    // if person is eligible
    cout << "\nCongratulations! you'r eligible for this loan." << endl;
    return 0;
}