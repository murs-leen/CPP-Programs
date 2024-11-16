#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{0},
                     {0},
                     {0}};
    int sum = 0;
    float avg = 0;
    cout << "Enter values in  3 X 3 array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] < 0)
                arr[i][j] = -arr[i][j]; // if number is -ve then multiply it by -ve sign to make it +ve
        }
    }

    // calculate the sum and avg of 1st row
    int i = 0;
    for (int j = 0; j < 3; j++)
    {
        sum += arr[i][j];
    }
    avg = sum / 3;
    cout << "Sum of 1st row = " << sum << endl;
    cout << "Avg of 1st row = " << avg << endl;
    sum = 0;

    // calculate the sum and avg of 2nd row
    i = 1;
    for (int j = 0; j < 3; j++)
    {
        sum += arr[i][j];
    }
    avg = sum / 3;
    cout << "Sum of 2nd row = " << sum << endl;
    cout << "Avg of 2nd row = " << avg << endl;
    sum = 0;

    // calculate the sum and avg of 3rd row
    i = 2;
    for (int j = 0; j < 3; j++)
    {
        sum += arr[i][j];
    }
    avg = sum / 3;
    cout << "Sum of 3rd row = " << sum << endl;
    cout << "Avg of 3rd row = " << avg << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}