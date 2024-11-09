#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3, ch4, ch5;

    // Input all 5 characters in a single cin statement
    cout << "Enter exactly 5 characters: ";
    cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;

    // Check if there are extra characters in the input buffer
    if (cin.peek() != '\n') {
        cout << "Error: You must enter exactly 5 characters!" << endl;
        return 1;  // Exit with error
    }

    // Display the entered characters
    cout << "You entered the characters: " << ch1 << ", " << ch2 << ", " << ch3 << ", " << ch4 << ", " << ch5 << endl;

    return 0;
}
