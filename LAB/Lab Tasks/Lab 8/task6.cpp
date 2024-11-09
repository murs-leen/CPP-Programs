#include <iostream>
using namespace std;
int main() {
    int i = 1; // Counter for numbers entered
    int number;
    int sum = 0;
    cout << "Enter at least " << 5 << " numbers to calculate their sum.\n";
    while (i <= 5) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        if (number < 0) {    // Skip adding negative numbers
            continue;
        }
        // Add the number to the sum
        sum += number;
        i++;
    }
    cout << "Sum of the entered numbers (ignoring negatives): " << sum << endl;
    return 0;
}
