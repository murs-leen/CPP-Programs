// Recursive Rightmost Digit Manipulation
#include <iostream>
using namespace std;

int main()
{
    int num, rightMostDigit, remainingNum;
    cout << "Enter a 6-digit number: ";
    cin >> num;
    if(cin.fail() || num <= 99999 || num > 999999 ){
        cout << "Invalid input. Number must be 6-digit integer." << endl;
        return 0;
    }

    // For 6-digit (right most)
    rightMostDigit = num % 10; //Extracting the right most digit        
    remainingNum = num / 10; // Removing the right most digit

    if(rightMostDigit % 2 == 0){ // For even
        remainingNum += 1;
        if(remainingNum > 99999){ // If overflow one digit
            remainingNum -= 2;
        }
    }
    else if(rightMostDigit % 2 != 0){ // For odd
        remainingNum -= 1;
    }

    // For 5th-digit (form left)
    rightMostDigit = remainingNum % 10;
    remainingNum /= 10;
    
    if(rightMostDigit % 2 == 0){
        remainingNum += 1;
        if(remainingNum > 9999){
            remainingNum -= 2;
        }
    }
    else if(rightMostDigit % 2 != 0){ // For odd
        remainingNum -= 1;
    }

    // For 4th -digit(from left)
    rightMostDigit = remainingNum % 10;
    remainingNum /= 10;

    if(rightMostDigit % 2 == 0){
        remainingNum += 1;
        if(remainingNum > 999){
            remainingNum -= 2;
        }
    }
    else if(rightMostDigit % 2 != 0){ // For odd
        remainingNum -= 1;
    }

    // For 3rd-digit(from left)
    rightMostDigit = remainingNum % 10;
    remainingNum /= 10;

    if(rightMostDigit % 2 == 0){
        remainingNum += 1;
        if(remainingNum > 99){
            remainingNum -= 2;
        }
    }
    else if(rightMostDigit % 2 != 0){ // For odd
        remainingNum -= 1;
    }

    // For 2nd-digit(from left)
    rightMostDigit = remainingNum % 10;
    remainingNum /= 10;

    if(rightMostDigit % 2 == 0){
        remainingNum += 1;
        if(remainingNum > 9){
            remainingNum -= 2;
        }
    }
    else if(rightMostDigit % 2 != 0){ // For odd
        remainingNum -= 1;
    }
    cout << "Final Result is: " << remainingNum << endl;
    return 0;
}