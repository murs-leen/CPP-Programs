// Input a number form user
// and print table of that number

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number to print table:";
    cin >> num;
    int i = 1;      // Counter variable
    while (i <= 10) // print table up to 10
    {
        // Printing table
        cout << num << " X " << i << " = " << num * i << endl;
        i++;
    }
    return 0;
}