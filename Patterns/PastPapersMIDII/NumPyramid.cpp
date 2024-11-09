#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,num;
    cout << "Enter number: ";
    cin >> num;
    for(i = 1; i <= num; i++)
    {
        for(j = i; j <= num ; j++)
        {
            cout << setw(3)<< left << j * j;
        }
        cout << endl;
    }
    return 0;
}