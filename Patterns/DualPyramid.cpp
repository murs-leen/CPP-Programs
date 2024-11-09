    // Dual pyramid
#include<iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter a number: ";
    cin >> num;
    // upper pyramid
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= (num - i); j++)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(j = 1; j <= (i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

        // lower pyramid
        for(i = (num - 1); i >= 1; i--)
        {
            for(j = 1; j <= (num - i); j++)
            {
                cout << " ";
            }
            for(j = i; j >= 1; j--)
            {
                cout << "*";
            }
            for(j = 1; j <= (i - 1); j++)
            {
                cout << "*";
            }
            cout << endl;
        }

}