// Monthly Income Tax Calculation for Pakistani Citizens

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float taxOnAnnualIncome, annualIcome, originalAmount, rebate, monthlyTaxDeduct;
    char salariedPerson, teacher;
    bool Isteacher = true;
    cout << fixed << setprecision(3);
    cout << ">>>Tax calculation for fiscal year 2023-2024<<< \n" << endl;
    cout << "Enter your annual income (PKR): ";
    cin >> annualIcome;
    cout << endl;
    if(cin.fail() || annualIcome < 0){ //Input validation
        cout << "Invalid annual income!" << endl;
        return 1;
    }
    originalAmount = annualIcome;
    cout << "Are you salaried person:" << endl;
    cout << "Press 'Y' for Yes 'N' for NO: ";
    cin >> salariedPerson;
    cout << endl;

    // check for invalid input
    if (salariedPerson != 'y' && salariedPerson != 'Y')
        if (salariedPerson != 'n' && salariedPerson != 'N'){
            cout << "Invalid input" << endl;
            return 1;
    }
    cout << "Are you a teacher in non-profit organization?" << endl;
    cout << "Press 'Y' for Yes 'N' for No: ";
    cin >> teacher;
    cout << endl;

  // check for invalid input
    if (teacher != 'y' && teacher != 'Y')
        if (teacher != 'n' && teacher != 'N'){
            cout << "Invalid input" << endl;
            return 1;
        }
    if (teacher != 'y' && teacher != 'Y')
        Isteacher = false;

    // For salaried and non-salaried persons
    if (annualIcome <= 600000){
        cout << "No Tax on this amount :)" << endl;
        return 0;
    }
    // Tax Calculations for Salaried Individuals
    if (salariedPerson == 'y' || salariedPerson == 'Y')
    {
        if (annualIcome <= 1200000){ // 600,001 - 1200,000
            annualIcome = annualIcome - 600000;
            taxOnAnnualIncome = annualIcome * (2.5 / 100);
            cout << "For Salaried Individuals:" << endl;
            if (!Isteacher)
                cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome <= 2400000){ // 1,200,001 to PKR 2,400,000
        
                annualIcome = annualIcome - 1200000;
                taxOnAnnualIncome = 15000 + (annualIcome * (12.5 / 100));
                cout << "For Salaried Individuals:" << endl;
                if (!Isteacher)
                    cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome <= 3600000){ // 2,400,001 to PKR 3,600,000
                annualIcome = annualIcome - 2400000;
                taxOnAnnualIncome = 165000 + (annualIcome * (20.0 / 100));
                cout << "For Salaried Individuals:" << endl;
                if (!Isteacher)
                    cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome <= 6000000){ // 3,600,001 to PKR 6000,000
                annualIcome = annualIcome - 3600000;
                taxOnAnnualIncome = 405000 + (annualIcome * (25.0 / 100));
                cout << "For Salaried Individuals:" << endl;
                if (!Isteacher)
                    cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome > 6000000){ // Above 6,000,000
                annualIcome = annualIcome - 6000000;
                taxOnAnnualIncome = 1005000 + (annualIcome * (32.5 / 100));
                cout << "For Salaried Individuals:" << endl;
                if (!Isteacher)
                    cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
             //Tax dedution for tecaher(salaried) working in non-profit organizaion
            if (Isteacher){
                cout << "Total Tax on annual income before rebate" << " = " << taxOnAnnualIncome << " PKR" << endl;
                rebate = taxOnAnnualIncome * (25.0 / 100);
                cout << "Tax rebated :" << rebate << endl;
                taxOnAnnualIncome = taxOnAnnualIncome - rebate;
                cout << "Total Tax on annual income (for teacher) after rebate" << " = " << taxOnAnnualIncome << " PKR" << endl;
            }
             // Monthly tax deduction
                monthlyTaxDeduct = taxOnAnnualIncome / 12.0;
                cout << "Monthly Tax deduction = " << monthlyTaxDeduct << endl;
                
    }
    // Tax Calculations for Non-Salaried Individuals
    else if (salariedPerson == 'n' || salariedPerson == 'N')
    {
        if (annualIcome <= 1200000){ // 600,001 - 1200,000
            annualIcome = annualIcome - 600000;
            taxOnAnnualIncome = annualIcome * (5.0 / 100);
            cout << "For Non-Salaried Individuals:" << endl;
            if(!Isteacher)
                cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome <= 2400000){ // 1,200,001 to PKR 2,400,000
            annualIcome = annualIcome - 1200000;
            taxOnAnnualIncome = 30000 + (annualIcome * (12.5 / 100));
            cout << "For Non-Salaried Individuals:" << endl;
            if(!Isteacher)
                cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome <= 3600000){ // 2,400,001 to PKR 3,600,000
            annualIcome = annualIcome - 2400000;
            taxOnAnnualIncome = 180000 + (annualIcome * (17.5 / 100));
            cout << "For Non-Salaried Individuals:" << endl;
            if(!Isteacher)
                cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome <= 6000000){ // 3,600,001 to PKR 6000,000
            annualIcome = annualIcome - 3600000;
            taxOnAnnualIncome = 390000 + (annualIcome * (22.5 / 100));
            cout << "For Non-Salaried Individuals:" << endl;
            if(!Isteacher)
                cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }
        else if (annualIcome > 6000000){ // Above 6,000,000
            annualIcome = annualIcome - 6000000;
            taxOnAnnualIncome = 975000 + (annualIcome * (30.0 / 100));
            cout << "For Non-Salaried Individuals:" << endl;
            if(!Isteacher)
                cout << "Total Tax on annual income" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }

        //Tax deduction for tecaher (non-salaried) working in non-profit organizaion
        if (Isteacher){
            cout << "Total Tax on annual income before rebate" << " = " << taxOnAnnualIncome << " PKR" << endl;
            rebate = taxOnAnnualIncome * (25.0 / 100);
            cout << "Tax rebated :" << rebate << endl;
            taxOnAnnualIncome = taxOnAnnualIncome - rebate;
            cout << "Total Tax on annual income (for teacher)" << " = " << taxOnAnnualIncome << " PKR" << endl;
        }

        // Monthly tax deduction
            monthlyTaxDeduct = taxOnAnnualIncome / 12.0;
            cout << "Monthly Tax deduction = " << monthlyTaxDeduct << endl;
    }
    return 0;
}