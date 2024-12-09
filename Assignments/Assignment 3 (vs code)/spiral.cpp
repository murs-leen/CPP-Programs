#include <iostream>
using namespace std;
int main()
{
    const int rows = 100;
    const int cols = 100;
    int arr[rows][cols];
    int spiral[rows] = {0};
    int noOfRows, noOfCols;
    cout << "Enter the number of rows:";
    cin >> noOfRows;
    cout << "Enter the of number of columns: ";
    cin >> noOfCols;
    cout << "Enter the values in " << noOfRows << " X " << noOfCols << " : " << endl;
    for (int i = 0; i < noOfRows; i++)
    {
        for (int j = 0; j < noOfCols; j++)
        {
            cin >> arr[i][j];
        }
    }
    int top = 0, right = noOfCols - 1,
        bottom = noOfRows - 1, left = 0;
    int index = 0;
    cout << "Entered in loop...." << endl;
    while (top <= bottom && left <= right)
    {
        // top
        for (int i = left; i <= right; i++)
        {
            spiral[index++] = arr[top][i];
        }
        top++;

        // Right
        for (int i = top; i <= bottom; i++)
        {
            spiral[index++] = arr[i][right];
        }
        right--;
        // Bottom
        for (int i = right; i >= left; i--)
        {
            spiral[index++] = arr[bottom][i];
        }
        bottom--;
        // Left
        for (int i = bottom; i >= top; i--)
        {
            spiral[index++] = arr[i][left];
        }
        left++;
    }
    int sortedArr[rows] = {0};
    int evenIdx = 0, oddIdx = 0;

    for (int i = 0; i < noOfCols * noOfRows; i++)
    {
        if (spiral[i] % 2 == 0)
            sortedArr[evenIdx++] = spiral[i];
    }
    // sorting even numbers
    for (int i = 0; i < evenIdx; i++)
    {
        for (int j = i + 1; j < evenIdx; j++)
        {
            if (sortedArr[i] >= sortedArr[j])
            {
                int temp = sortedArr[j];
                sortedArr[j] = sortedArr[i];
                sortedArr[i] = temp;
            }
        }
    }

    oddIdx = evenIdx;
    for (int i = 0; i < noOfCols * noOfRows; i++)
    {
        if (spiral[i] % 2 != 0)
            sortedArr[oddIdx++] = spiral[i];
    }

    //sorting odd number
    for (int i = evenIdx; i < noOfCols * noOfRows ; i++)
    {
        for (int j = i + 1; j < noOfCols * noOfRows; j++)
        {
            if (sortedArr[i] >= sortedArr[j])
            {
                int temp = sortedArr[j];
                sortedArr[j] = sortedArr[i];
                sortedArr[i] = temp;
            }
        }
    }

    cout << "Spiral : ";
    for (int i = 0; i < noOfCols * noOfRows; i++)
        cout << sortedArr[i] << " ";
}