#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int S = 10;
    int arr[S] = {34,23,5,65,3,4,7,6,4,3};
    for(int i = 0; i < S; i++)
    {
        cout << "Enter value at index " << i << ":";
        cin >> arr[i];
    }
    for(int i = 0; i < S; i++)
        cout << "Value at index " << i << " = " << setw(2) << arr[i] << endl;
    return 0;
}