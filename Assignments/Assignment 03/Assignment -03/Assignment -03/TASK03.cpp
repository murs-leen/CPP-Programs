#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 200; // Maximum size of the array
    int matrix[MAX_SIZE][MAX_SIZE];
    int m, n;

    // Step 1: Input the dimensions of the matrix
    cout << "Enter number of rows (m) (max 200): ";
    cin >> m;
    cout << "Enter number of columns (n) (max 200): ";
    cin >> n;

    cout << "Enter the elements in " << m << " X " << n << " matrix: "<< endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Step 2: Spiral Order Traversal
    int spiral[MAX_SIZE];
    int index = 0;
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; i++) {
            spiral[index++] = matrix[top][i];
        }
        top++; // Move top boundary down

        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            spiral[index++] = matrix[i][right];
        }
        right--; // Move right boundary left

        // Traverse from right to left on the bottom row (if applicable)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                spiral[index++] = matrix[bottom][i];
            }
            bottom--; // Move bottom boundary up
        }

        // Traverse from bottom to top on the left column (if applicable)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                spiral[index++] = matrix[i][left];
            }
            left++; // Move left boundary right
        }
    }
    cout << "Spiral :";
    for (int i = 0; i < m * n; i++) 
    {
        cout << spiral[i] << " ";
    }
    cout << endl;

    // Step 3: Rearrange by Parity
    int rearranged[MAX_SIZE];
    int evenIndex = 0, oddIndex = 0;

    // First, add all even numbers
    for (int i = 0; i < m * n; i++) {
        if (spiral[i] % 2 == 0) {
            rearranged[evenIndex++] = spiral[i];
        }
    }

    // Then, add all odd numbers
    oddIndex = evenIndex; // Start placing odd numbers after evens
    for (int i = 0; i < m * n; i++) {
        if (spiral[i] % 2 != 0) {
            rearranged[oddIndex++] = spiral[i];
        }
    }

    // Step 4: Output the rearranged 1D array
    cout << "Rearranged array (Even first, then Odd):" << endl;
    for (int i = 0; i < m * n; i++) {
        cout << rearranged[i] << " ";
    }
    cout << endl;

    return 0;
}
