#include<iostream>
using namespace std;
int main()
{
    const int S = 10;
    int arr[S] = {0};
    int min = 0, index = 0;
    for(int i = 0; i < S; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> arr[i];
    }
    for(int j = 1; j < S; j++)
    {
        if(arr[min] > arr[j])
        {
            arr[min] = arr[j];
            index = j;
        }
    }
    cout << "Minimum value at index " << index << " = " << arr[min] << endl;
    return 0;
}