#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {0};

    // Total lenght of an array
    // give us size in bytes
    cout << "Size of array or length: " << sizeof(arr)/sizeof(arr[0]) << endl;
    return 0;
}