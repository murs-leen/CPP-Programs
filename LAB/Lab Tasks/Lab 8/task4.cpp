#include <iostream>
using namespace std;
int main() {
    int number, originalNumber, remainder, reversedNumber = 0;
    bool isPalindrome = true;
    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number; // Store the original number
    // Reverse the number using a loop
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversed number
        number /= 10; // Remove the last digit from the original number
    }

    // Check if the original number matches the reversed number
    if (originalNumber != reversedNumber) {
        isPalindrome = false;
    }
    if (isPalindrome) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }
    return 0;
}
