#include<iostream>
using namespace std;
int main()
{
    const int S = 10;
    int arr[S] = {45,54,12,67,4,34,87,23,34,43};
    int index = 0;
    for(int i = 1; i < S; i++)
    {
        // comparing the array with its previous index
        if(arr[index] < arr[i])

        // updating value on 0-index
            arr[index] = arr[i];
    }
    cout << "Largest value in array = " << arr[index] << endl;
} 