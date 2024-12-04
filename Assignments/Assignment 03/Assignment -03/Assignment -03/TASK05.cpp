//#include <iostream>
//using namespace std;
//
//int main() {
//    const int MAX_SIZE = 200; // Maximum size of the matrix
//    int matrix[MAX_SIZE][MAX_SIZE] = { 0 };
//    int n, m;
//
//    // Step 1: Input dimensions of the matrix
//    cout << "Enter the number of rows (n): ";
//    cin >> n;
//    cout << "Enter the number of columns (m): ";
//    cin >> m;
//    cout << "Enter the elements of the matrix:" << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//    int spiralSum = 0, loopVar = 0;
//    int top = 0, bottom = n - 1, left = 0, right = m - 1;
//
//    while (loopVar < m * n) {
//        // Traverse from left to right on the top row
//        for (int i = left; i <= right; i++) {
//            spiralSum += matrix[top][i];
//        }
//        top++; // Move top boundary down
//
//        // Traverse from top to bottom on the right column
//        for (int i = top; i <= bottom; i++) {
//            spiralSum += matrix[i][right];
//        }
//        right--; // Move right boundary left
//
//        // Traverse from right to left on the bottom row
//        if (top <= bottom) {
//            for (int i = right; i >= left; i--) {
//                spiralSum += matrix[bottom][i];
//            }
//            bottom--; // Move bottom boundary up
//        }
//
//        // Traverse from bottom to top on the left column
//        if (left <= right) {
//            for (int i = bottom; i >= top; i--) {
//                spiralSum += matrix[i][left];
//            }
//            left++; // Move left boundary right
//        }
//        loopVar++;
//    }
//
//    // Step 3: Sort Each Row
//    for (int i = 0; i < m; i++) 
//    {
//        for (int j = 0; j < n - 1; j++) 
//        {
//            int minIndex = j;
//            for (int k = j + 1; k < n; k++) 
//            {
//                if (matrix[i][k] < matrix[i][minIndex])
//                {
//                    minIndex = k;
//                }
//            }
//            int temp = matrix[i][j];
//            matrix[i][j] = matrix[i][minIndex];
//            matrix[i][minIndex] = temp;
//        }
//    }
//
//    // Step 4: Output the Spiral Sum and the Modified Matrix
//    cout << "Spiral Sum: " << spiralSum << endl;
//    cout << "Modified Matrix with Sorted Rows:" << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
