#include <iostream>

using namespace std;

int main() {

    long double x;
    long double n;

    cout << "Enter value for x: ";
    cin >> x;
    cout << "Number of terms: ";
    cin >> n;

    long double sum = 0;
    bool sign = true;
    double count = 2;
    
    for (size_t i = 0; i < n; i++)
    {
        double xtopowd = x;
        for (size_t j = 0; j < (count-1); j++)
            xtopowd = x * xtopowd;
        cout << "power: " << xtopowd << endl;
    
        double div = count;
        for (size_t j = (count-1); j > 0; j--)
            div = j * div;
        cout << "fact: " << div << endl;

        if (sign) {
            xtopowd = -xtopowd;
            sign = false;
        } else
            sign = true;

        sum += xtopowd / div;
        count += 2;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}