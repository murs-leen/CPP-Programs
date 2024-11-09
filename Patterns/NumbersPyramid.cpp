#include<iostream>
using namespace std;
int main()
{
    int i,j, num;
    cout << "Enter a number: ";
    cin >> num;
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            cout << j;
        }
        for(j = 1; j <= i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}