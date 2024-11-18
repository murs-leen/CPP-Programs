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
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i + 1 << "row: " << sum << endl;
        sum = 0;
    }
    return 0;
}