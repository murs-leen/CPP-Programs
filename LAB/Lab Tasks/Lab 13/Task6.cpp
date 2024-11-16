#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < rows; i++) {
        // Find the minimum element in the current row
        int minRowVal = matrix[i][0];
        int minColIndex = 0;

        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minRowVal) {
                minRowVal = matrix[i][j];
                minColIndex = j;
            }
        }

        // Check if the minimum element is the maximum in its column
        bool isSaddlePoint = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][minColIndex] > minRowVal) {
                isSaddlePoint = false;
                break;
            }
        }
        if (isSaddlePoint) {
            cout << "Saddle point found at " << i + 1 << minColIndex + 1 << " with value: " << minRowVal << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No saddle point found in the matrix ";
    }
    return 0;
}
