#include<iostream>
using namespace std;
int main()
{
    const int S = 10;
    int arr[S] = {0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter 10 integer values: ";
    for(int i = 0; i < S; i++)
    {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for(int j = 0; j < S; j++){
        cout << arr[j] << ", ";
    }
    cout << endl;
    // cout << "Reversed Array: ";
    // for(int j = S-1; j >= 0; j--)
    // {
    //     cout << arr[j] << ", ";
    // }
    int st = 0, ed = S-1;
    for(int j = 0; j < S/2; j++)
    {
        arr[st] = arr[ed];
    //    swap(arr[st],arr[ed]);
       st++;
       ed--;
    }
    cout << "Reversed array: ";
    for(int j = 0; j < S; j++){
        cout << arr[j] << ", ";
    }
    // for(int index: arr){
    //     cout << index << " ";
    // }

}