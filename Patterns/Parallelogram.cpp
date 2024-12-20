#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num, i, j;
    cout << "Enter a number(odd): ";
    cin >> num;
    if(num % 2 == 0)
    {
        cout << "Number must be ab odd integer.";
        return 0;
    }
    int rows = (num / 2) + 1;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= (rows - i); j++)
        {
            cout << setw(4) << " " ;
        }
        for(j = 1; j <= i; j++)
        {
            cout<< setw(4) << "*" ;
        }
        cout << endl;
    }

    for(i = rows-1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++){
        cout << setw(4) << "*" ; 
        }
        cout << endl;
    }

}