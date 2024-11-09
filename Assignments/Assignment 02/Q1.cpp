// Write a program to convert
// binary or octal number
// into decimal number

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, remainder, originalNum, result = 0,quotient;
    cout << "Press a number (1 for binary, 2 for octal): ";
    cin >> num1;
    switch (num1)
    {
    case 1:{
            cout << "Enter a binary number (3,4 or 5 digits):"; // Take input
            cin >> num2;

            originalNum = num2;
            //If num is greater than 5-digit and less then 3-digit
            if(originalNum <= 99 || originalNum > 11111) { cout << "Invalid input" <<endl; return 0;} 

            //For 5th placed digit
        if(originalNum > 1111){
            quotient = num2 / 10000;
            if (quotient != 0 && quotient != 1) { cout << "Invalid input"; return 0;}
            result += (quotient * 16); // 5th placed digit from right (2^4)
            quotient = (num2/1000) % 10; //Extract digit that is on 4rth placed from right
            result += (quotient * 8); //Append in reuslt
            } 
            //For 4rth placed digit
        else if(originalNum > 111){
            quotient = num2 / 1000;
            if (quotient != 0 && quotient != 1) {cout << "Invalid input"; return 0;}
            result += (quotient * 8); // 4th placed digit from right (2^3)
            }
         //For 1st placed digit
            remainder = num2 % 10;
            if (remainder != 0 && remainder != 1){cout << "Invalid input"; return 0; }
            result += (remainder * 1); // 1st placed digit from right (2^0)
            num2 = num2 / 10; //Removing first digit from right

        //For 2nd placed digit
            remainder = num2 % 10;
            if (remainder != 0 && remainder != 1) {cout << "Invalid input"; return 0;}
            result += (remainder * 2); // 2nd placed digit from right (2^1)
            num2 = num2 / 10;

        //For 3rd placed digit
            remainder = num2 % 10;
            if (remainder != 0 && remainder != 1) {cout << "Invalid input"; return 0;}
            result += (remainder * 4); // 3rd placed digit from right (2^2)
            cout << "Decimal notation of binary (" << originalNum << ") = " << result << endl;
             break;
    }
    case 2:{ //For octal number

            cout << "Enter Octal number (3,4 or 5 digits):"; // Take input
            cin >> num2;
            originalNum = num2;
        if(originalNum <= 99 || originalNum > 77777){cout << "Invalid input" << endl; return 0;}

        //For 5th placed digit
        if(originalNum > 7777){
            quotient = num2 / 10000;
            if (quotient > 7) { cout << "Invalid input"; return 0;}
            result += (quotient * 4096); // 5th placed digit from right (8^4)
            quotient = (num2/1000) % 10; //Extract digit that is on 4rth placed from right
            result += (quotient * 512); // 4rth placed digit from right (8^3)
            } 
        //For 4rth placed digit
        else if(originalNum > 777){
            quotient = num2 / 1000;
        if (quotient > 7) { cout << "Invalid input"; return 0;}
            result += (quotient * 512); // 4th placed digit from right (8^3)
        }
        //For 1st placed digit
            remainder = num2 % 10;
        if (remainder > 7) { cout << "Invalid input"; return 0;}
            result += (remainder * 1); // 1st placed digit from right (8^0)
            num2 = num2 / 10;
        //For 2nd placed digit
            remainder = num2 % 10;
        if (remainder > 7) { cout << "Invalid input"; return 0;}
            result += (remainder * 8); // 2nd placed digit from right (8^1)
            num2 = num2 / 10;
        //For 3rd placed digit
            remainder = num2 % 10;
        if (remainder > 7) { cout << "Invalid input"; return 0;}
            result += (remainder * 64); // 3rd placed digit from right (8^2)
            cout << "Decimal notation of Octal (" << originalNum << ") = " << result << endl;
        break;    
    }
    default:
        cout << "Number must be 1 or 2 any other input will considered invalid :)" << endl;
        break;
    }
}