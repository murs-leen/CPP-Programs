#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int i, j,num;
    // cout << "Enter a number(0-9): ";
    // cin >> num;
    // int count = 1;
    // for(i = num; i >= 1; i--)
    // {
    //     for(j = count; j <= num; j++)
    //     {
    //         cout << j*j<< " ";
    //     }
    //     count++;
    //     cout << endl;
    // }
int x = 2;
x = (++x * x++) + ++x;
cout << x;
return 0;
}