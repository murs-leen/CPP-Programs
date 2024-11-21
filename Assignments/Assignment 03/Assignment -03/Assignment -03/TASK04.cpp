#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main() {
    const int MAX_SIZE = 200; // Maximum size of the matrix
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, m;

    // Step 1: Input dimensions of the matrix
    cout << "Enter the number of rows (n, max 200): ";
    cin >> n;
    cout << "Enter the number of columns (m, max 200): ";
    cin >> m;

    if (n > MAX_SIZE || m > MAX_SIZE) {
        cout << "Matrix size exceeds the limit of 200x200!" << endl;
        return 1;
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Step 2: Spiral Sum Calculation
    int spiralSum = 0;
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; i++) {
            spiralSum += matrix[top][i];
        }
        top++; // Move top boundary down

        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            spiralSum += matrix[i][right];
        }
        right--; // Move right boundary left

        // Traverse from right to left on the bottom row (if applicable)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                spiralSum += matrix[bottom][i];
            }
            bottom--; // Move bottom boundary up
        }

        // Traverse from bottom to top on the left column (if applicable)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                spiralSum += matrix[i][left];
            }
            left++; // Move left boundary right
        }
    }

    // Step 3: Sort Each Row
    for (int i = 0; i < n; i++) {
        sort(matrix[i], matrix[i] + m);
    }

    // Step 4: Output the Spiral Sum and the Modified Matrix
    cout << "Spiral Sum: " << spiralSum << endl;
    cout << "Modified Matrix with Sorted Rows:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
