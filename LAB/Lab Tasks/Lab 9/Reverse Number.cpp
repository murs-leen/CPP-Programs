// Reverse number using do while loop
#include <iostream>
using namespace std;
int main()
{
    int num, reverseNum = 0, remainder, originalNum;
    cout << "Enter a number: ";
    cin >> num;
    do{
        remainder = num % 10; // Extract the last digit
        reverseNum = (reverseNum * 10) + remainder; // Append it to the reversed number
        num /= 10; // Remove the last digit
    } while (num != 0);
    cout << "Reversed number = " << reverseNum << endl;
    return 0;
}