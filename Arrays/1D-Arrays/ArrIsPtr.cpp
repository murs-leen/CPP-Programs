// The address of an array is the address of its first location or first index arr == arr[0]

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,3,54,3};
    int *ptr = & arr[0];
    cout << "Address of array's 0 index : "<< ptr << endl;
    cout << "Address of whole array : "<< arr << endl;
}