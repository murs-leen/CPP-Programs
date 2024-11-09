// Advanced Health Insurance Premium Calculator

#include <iostream>
using namespace std;
int main()
{
    int age;
    float premium,basePremium, smokeCharges, preConditions;
    char smoking;
    cout << ">>Advanced Health Insurance Premium Calculator<< \n" << endl;
    cout << "Enter your age (Years): ";
    cin >> age;
    // Input validation
    if (cin.fail() || age <= 0){
        cout << "Invalid age!" << endl;
        return 1;
    }
    cout << "Do you have any pre-existing conditions (diseases)? \n" << endl;
    cout << "Press 0 if you don't,1 if you have one" << endl;
    cout << "pre-existing condition and upto so on: ";
    cin >> preConditions;
    if (cin.fail() || preConditions < 0){ //Input validation
        cout << "Invalid input!" << endl;
        return 1;
    }
    cout << endl;
    cout << "Do you somke?" << endl;
    cout << "Press Y for 'Yes', N for 'No':";
    cin >> smoking;
    // Input validation
    if (smoking != 'y' && smoking != 'Y')
        if (smoking != 'n' && smoking != 'N'){
            cout << "Invalid input" << endl;
            return 1;
        }
    // Age of applicant
    basePremium = (age < 18) ? 2000 : (age <= 30) ? 3500
                              : (age <= 50)   ? 5000
                                              : 8000;
    // Pre-existing conditions
    if(preConditions == 1) premium = basePremium + basePremium * 0.25; //25% add in basePremium and assign to premium
    else if(preConditions > 1) premium = basePremium + basePremium * 0.5; //50% add in basePremium assign to premium

    // Smoker status
    if(smoking == 'Y' || smoking == 'y') premium = premium + basePremium * 0.2; //20% of basePremium add in premium
    
    cout << "Total premium is : PKR " << premium << " per month" << endl;
    return 0;
}