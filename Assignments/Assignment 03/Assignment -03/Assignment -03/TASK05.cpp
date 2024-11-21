#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 200; // Maximum size of the matrix
    int matrix[MAX_SIZE][MAX_SIZE];
    bool visited[MAX_SIZE][MAX_SIZE] = { false }; // To track visited cells
    int m, n, t;

    // Step 1: Input matrix dimensions and target value
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;
    cout << "Enter the target value (t): ";
    cin >> t;

    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Step 2: Check the path using a simple loop
    int x = 0, y = 0; // Start at the top-left corner
    while (x < m && y < n) {
        if (matrix[x][y] >= t) {
            cout << "No Path Found" << endl;
            return 0;
        }

        // Move right if possible, otherwise move down
        if (y + 1 < n && matrix[x][y + 1] < t) {
            y++; // Move right
        }
        else if (x + 1 < m && matrix[x + 1][y] < t) {
            x++; // Move down
        }
        else {
            // No valid move available
            cout << "No Path Found" << endl;
            return 0;
        }
    }

    // If we reach the bottom-right corner
    if (x == m - 1 && y == n - 1) {
        cout << "Path Exists" << endl;
    }
    else {
        cout << "No Path Found" << endl;
    }

    return 0;
}
