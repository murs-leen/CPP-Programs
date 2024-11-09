#include<iostream>
using namespace std;
int main()
{
    const int S = 10;
    int sum = 0,avg;
    int arr[S] = {0};
    for(int i = 0; i < S; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    avg = sum /= 10;
    cout << "Average = " << avg<< endl;
    return 0;
}