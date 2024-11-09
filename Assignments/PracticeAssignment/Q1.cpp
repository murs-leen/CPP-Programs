// Nested Factorial Sum:
//  Write a program that takes an integer n 
// and calculates the sum of factorials up to n,
// S=1!+2!+3!+⋯+n!  using nested loops.

#include<iostream>

using namespace std;
int main()
{
    int num,i,j,fact = 1, sum = 0;
    cout << "Enter a number:";
    cin >> num;
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= i; j++){
            fact = fact * j;
        }
        sum += fact;
        cout << "Fact of " << i << " = " << fact << endl;
        fact = 1;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}