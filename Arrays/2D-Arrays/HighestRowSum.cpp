#include<iostream>
using namespace std;
int highestRowSum(int arr[][5], int rows);
int main()
{
    const int rows = 5;
    const int cols = 5;
    int arr[rows][cols];
    int max =  highestRowSum(arr, rows);
    cout << "Maximum row sum: " << max;
    return 0;
}
int highestRowSum(int arr[][5], int rows)
{
    int sum = 0;
    int max = sum;
    int row;
    srand(time(0));
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % 6 + 1;
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
        if(sum > max){
            max = sum;
            row = i;
        }
        sum = 0;
    }
    cout << "Row " << row <<":" << endl;
    return max;
}