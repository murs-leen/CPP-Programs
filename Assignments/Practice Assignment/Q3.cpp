#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 3;
    int arr1[SIZE] = {0};
    int arr2[SIZE] = {0};
    int arr3[SIZE] = {0};
    int sumOfArr1 = 0, sumOfArr2 = 0, sumOfArr3 = 0;
    int colSum1 = 0, colSum2 = 0, colSum3 = 0;
    int diagSum1 = 0, diagSum2 = 0;
    bool notMagic = false;
    cout << "Enter 3 numbers (each separated by space): ";
    for(int i = 0; i < SIZE; i++)
    {
        cin >> arr1[i];
        sumOfArr1 += arr1[i];
    }
    cout << "Enter 3 numbers (each separated by space): ";
    for(int i = 0; i < SIZE; i++)
    {
        cin >> arr2[i];
        sumOfArr2 += arr1[i];
    }
    cout << "Enter 3 numbers (each separated by space): ";
    for(int i = 0; i < SIZE; i++)
    {
        cin >> arr3[i];
        sumOfArr3 += arr1[i];
    }
       
    // column sum
    colSum1 = arr1[0] + arr2[0] + arr3[0];
    colSum2 = arr1[1] + arr2[1] + arr3[1]; 
    colSum3 = arr1[2] + arr2[2] + arr3[2]; 

    // Diagonal sum
    diagSum1 = arr1[0] + arr2[1] + arr3[2];
    diagSum2 = arr1[2] + arr2[1] + arr3[0];
       
        if(sumOfArr1 == sumOfArr2 && sumOfArr1 == sumOfArr3)
        {
            if(colSum1 == colSum2 && colSum1 == colSum3)
            {
                if(diagSum1 == diagSum2)
                {
                    notMagic = true;
                }
            }
        }
        if(!notMagic){
            cout << "Not a <*> Magic <*> square." << endl;
        }
        else{
            cout << "It's magic square" << endl;
        }
        return 0;
}