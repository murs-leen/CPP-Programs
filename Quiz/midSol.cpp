#include <iostream>
using namespace std;
int main()
{
    // all necessary variables
    double x, sum = 1.0;
    int n, even = 2, k;

    // Input values of x and n from the user
    std::cout << "Enter the value of X and N: ";
    std::cin >> x >> n;

    // Part-1: Power of X-to-N
    double ans = 1.0;
    for (int i = 0; i < n; i++)
    {
        ans = ans * x;
    }
    cout << "Power = " << ans << endl;
    // Part-2: Factorial of X
    int fact = 1;
    for (int j = 1; j <= x; j++)
    {
        fact = fact * j;
    }
    cout << "Factorial = " << fact << endl;

    // Part-3: Sum of the series up to n terms
    // Alternate addition and subtraction for even/odd iteration
    if (k % 2 == 0)
    {
        sum = sum + ans / fact;
    }
    else
    {
        sum = sum - ans / fact;
    }

    // updating variables after each iteration
    even = even + 2;
    ans = 1.0;
    fact = 1;
    // Output the result
    cout << "Sum of the series = " << sum << endl;
    return 0;
}