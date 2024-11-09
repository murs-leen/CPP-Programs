#include<iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if(num < 0)
        num = -num;
    for(i = 0; i < num; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(i >= 2 && i < num - 1 && j > 0 && j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}