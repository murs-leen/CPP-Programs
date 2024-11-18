#include <iostream>
using namespace std;
int main()
{
    const int rows = 5;
    const int col = 5;
    int sum = 0;
    int arr[rows][col] = {{4, 6, 4, 32, 2},
                          {5, 7, 5, 3, 44},
                          {6, 5, 3, 2, 5},
                          {7, 6, 4, 3, 2},
                          {66, 4, 2, 3, 5}};
    // Largest and Smallest in each row
    for (int i = 0; i < rows; i++)
    {
        int largest = arr[i][0];
        int smallest = arr[i][0];
        for (int j = 0; j < col; j++)
        {
            if (largest < arr[i][j])
                largest = arr[i][j];
            if (smallest > arr[i][j])
                smallest = arr[i][j];
        }
        cout << "Largest value in row " << i + 1 << " = " << largest << endl;
        cout << "Smallest value in row " << i + 1 << " = " << smallest << endl;
    }
    cout << endl;
    
    // Largest smallest in each col
    for (int i = 0; i < col; i++)
    {
        int largest = arr[0][i];
        int smallest = arr[0][i];
        for (int j = 0; j < rows; j++)
        {
            if (largest < arr[j][i])
                largest = arr[j][i];
            if (smallest > arr[j][i])
                smallest = arr[j][i];
        }
        cout << "Largest value in col " << i + 1 << " = " << largest << endl;
        cout << "Smallest value in col " << i + 1 << " = " << smallest << endl;
    }
    return 0;
}