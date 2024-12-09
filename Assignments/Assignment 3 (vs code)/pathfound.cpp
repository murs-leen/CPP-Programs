#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE = 200;
    int matrix[MAX_SIZE][MAX_SIZE];
    int m, n, t;

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;
    cout << "Enter the target value (t): ";
    cin >> t;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int x = 0, y = 0;
    while (x < m && y < n)
    {
        if (matrix[x][y] == t)
        {
            cout << "Path found";
            return 0;
        }
        if (y + 1 < n && matrix[x][y + 1] <= t)
        {
            if (matrix[x][y + 1] == t)
            {
                cout << "Path found";
                return 0;
            }
            y++;
        }
        else if (x + 1 < m && matrix[x + 1][y] <= t)
        {
            if (matrix[x + 1][y] == t)
            {
                cout << "Path found";
                return 0;
            }
            x++;
        }
        else
        {
            cout << "Path not found";
            return 0;
        }
    }
}
