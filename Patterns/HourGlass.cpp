#include<iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter a number:";
    cin >> num;
    while (num % 2 == 0)
    {
        cout << "Invalid! Number must be an odd.\n";
        cout << "Enter a number:";
        cin >> num;
    }

    // upper pyarimd(glass hour)
    for(i = num; i >= 1; i -= 2)
    {
        for(j = 1; j <= (num - i)/2; j++)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower pyramid(glass hour)
    for(i = 3; i <= num; i+=2)
    {
        for(j = 1; j <= (num - i)/2; j++ ) 
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
