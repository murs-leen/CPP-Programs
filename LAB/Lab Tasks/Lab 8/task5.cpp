// Calculate sum of numbers( min. 5)
// until user enter a -ve number
#include <iostream>
using namespace std;
int main() {
     int i= 1;
    int count = 0;
    int number;
    int sum = 0;
    cout << "Enter at least " << 5 << " numbers to calculate their sum.\n";
    cout << "If you enter a negative number, the program will terminate.\n";
    while (count < 5) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        if (number < 0) {
            // Break the loop if a negative number is entered
            cout << "Negative number entered. Terminating the loop.\n";
            break;
        }
        // Add the number to the sum
        sum += number;
        count++;
        i++;
    }
    // Output the sum
    cout << "Sum of the entered numbers: " << sum << endl;
    return 0;
}
