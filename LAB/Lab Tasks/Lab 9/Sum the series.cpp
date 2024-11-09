//Sum the series 1+3+5+7+....100
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i += 2) {
        sum += i;
    }
    cout << "The sum of the series 1 + 3 + 5 + ... + 99 is: " << sum << endl;

    return 0;
}
