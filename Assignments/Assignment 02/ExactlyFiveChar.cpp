#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;  // Input character

    // // Look at the next character without removing it
    // char nextChar = cin.peek();

    // // Show the character and what peek() sees
    // cout << "You entered: " << ch << endl;
    // if (nextChar == '\n') {
    //     cout << "The next character is a newline." << endl;
    // } else {
    //     cout << "The next character is: " << nextChar << endl;
    // }
    
    // ch = 9;
    if(ch < '0' || ch > '9')
    {
        cout << "invalid inpt" << endl;
    }
       return 0;
}
