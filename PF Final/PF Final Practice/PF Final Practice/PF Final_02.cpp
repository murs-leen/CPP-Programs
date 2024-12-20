//#include <iostream>
//using namespace std;
//
//const int N = 3; // Size of the square matrix
//
//void rotateMatrix(int matrix[N][N]) {
//    // Step 1: Transpose the matrix
//    for (int i = 0; i < N; ++i) {
//        for (int j = i + 1; j < N; ++j) {
//            // Swap elements at [i][j] and [j][i]
//            int temp = matrix[i][j];
//            matrix[i][j] = matrix[j][i];
//            matrix[j][i] = temp;
//        }
//    }
//
//    // Step 2: Reverse each row
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N / 2; ++j) {
//            // Swap elements in the row
//            int temp = matrix[i][j];
//            matrix[i][j] = matrix[i][N - j - 1];
//            matrix[i][N - j - 1] = temp;
//        }
//    }
//}
//
//void printMatrix(int matrix[N][N]) {
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int matrix[N][N] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    cout << "Original Matrix:" << endl;
//    printMatrix(matrix);
//
//    rotateMatrix(matrix);
//
//    cout << "Rotated Matrix:" << endl;
//    printMatrix(matrix);
//
//    return 0;
//}
