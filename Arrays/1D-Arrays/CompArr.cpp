#include<iostream>
using namespace std;
int main()
{
    int arr1[5] ={0};
    int arr2 [5]= {0};

    for(int i = 0; i < 10; i++)
    {
        cin >> arr2[i];
    }
    for(int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " ";
    }
    // if(arr1 < arr2){
    //     cout << "array 1 = " << arr1 << endl;
    // }
    // if(arr2 < arr1)
    // {
    //     cout << "array 2 = " << arr2 << endl;
    // }
    // int *ptr = &arr1[0];
    // cout << ptr << endl;
    return 0;
}