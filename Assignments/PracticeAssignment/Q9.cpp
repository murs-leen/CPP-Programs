#include <iostream>
using namespace std;
int main()
{
    bool isPrime = true;
    int diff, gap1 = 1, gap2;
    long int num,firstPrime, secPrime = 2,num1,num2;
    cout << "Enter a number from (Min num 2): ";
    cin >> num;

    // input validation
    while (cin.fail() || num <= 0)
    {
        cin.clear();
        cin.ignore();
        cout << "Enter valid integer." << endl;
        cout << "Enter a number: ";
        cin >> num;
    }
    if(num == 1)
    {
        cout << "No prime numbers in this range.." << endl;
        return 0;
    }
    if(num == 2)
    {
        num1 = 1; 
        num2 = 2;
        cout << "Max gap is " << gap1 << " :: "<< "betweeen " << num1 << " and " << num2 << endl;
        return 0;
    }

    for (int i = 2; i <= num; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            // swaping values
            firstPrime = secPrime;
            secPrime = i;
            diff = secPrime - firstPrime;
            gap2 = diff;

            // if current gap is larger or equal to the previous gap bt consecutive two numbers
            if (gap1 <= gap2)
            {
                gap1 = gap2;

            // store the values of the numbers which have maximum gap
                num1 = firstPrime;
                num2 = secPrime;
            }
        }
        isPrime = true;
    }
    cout << "Max gap is " << gap1 << " :: "<< "betweeen prime numbers " << num1 << " and " << num2 << endl;
    return 0;
}