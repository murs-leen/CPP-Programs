#include<iostream>
using namespace std;
int main()
{
    const int S = 7;
    float arr[S] = {0};
    int i ;
    float num, sum = 0, avg;
    for(i = 0; i < S; i++)
    {
        cout << "Enter rainfall data for day " << i + 1 << ":";
        cin >> num;
        arr[i] = num;
        sum += num;
    }
    avg = sum / 7;
    cout << endl;
    for(i = 0; i < S; i++)
    {
        cout << "Rain fall for day " << i + 1 << ": " << arr[i] << endl;
    }
    cout << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}