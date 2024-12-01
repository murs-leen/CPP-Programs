#include<iostream>
using namespace std;
int diagonalSum(int arr[][100], int rows, int cols);
int main()
{
    const int rows = 100;
    const int cols = 100;
    int arr[rows][cols];
    int m, n;
    cout << "Enter the number of rows:";
    cin >> m;
    cout << "Enter the number of columns:";
    cin >> n;
    if(n != m)
    {
        cout << "Number of columns not equal to number of rows.";
        return 1;
    }
   int sum =  diagonalSum(arr,m,n);
   cout << "\n Total diagonal sum = " << sum;
   return 0;
}
int diagonalSum(int arr[][100], int rows, int cols)
{
    int principlelDiagonal = 0;
    int secDiagonal = 0;
    int totalSum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 6 + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j)
                principlelDiagonal += arr[i][j];
            if(j == cols - i - 1 )
                secDiagonal += arr[i][j];
        }
    }
    cout << "Principal Diagonal = " << principlelDiagonal << endl;
    cout << "Secondary Diagonal sum = " << secDiagonal << endl;
    totalSum = principlelDiagonal + secDiagonal;
    return totalSum;
}
