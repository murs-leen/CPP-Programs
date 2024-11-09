#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    // Input two numbers
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    // Apply Euclidean algorithm to find HCF
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // a now holds the HCF
    cout << "HCF = " << a << endl;
    return 0;
}
