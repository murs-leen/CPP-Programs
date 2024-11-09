// Find HCF of two numbers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, HCF = 1, min, i;
    cout << "Enter number 1 :";
    cin >> num1;
    cout << "Enter number 2:";
    cin >> num2;
    if(num1 == 0) {
        HCF = num2; 
        cout << "HCF = " << HCF << endl;
        return 0;}
    else if(num2 == 0){
        HCF = num1;
        cout << "HCF = " << HCF << endl;
        return 0;
    } 

    // Assigning min number 
   (num1 < num2) ? min = num1 : min = num2; 

    i = 2;
    while (i <= min) {
        if (num1 % i == 0 && num2 % i == 0){
            HCF = HCF * i;
            num1 /= i;
            num2 /= i;
            min = (num1 < num2) ? num1 : num2; 
        if (num1 % i == 0 && num2 % i == 0) i = i; // if number is still divided by 'i'
        }
        else i += 1;
    }
    cout << "HCF = " << HCF << endl;
    cout << "i = " << i << endl;
    return 0;
}
//235454  2343432