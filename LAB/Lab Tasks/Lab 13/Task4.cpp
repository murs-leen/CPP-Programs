#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> rowsA >> colsA;
    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> rowsB >> colsB;
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible.";
        return 1;
    }
    int matrixA[rowsA][colsA];
    int matrixB[rowsB][colsB];
    int result[rowsA][colsB];
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }
    cout << "Enter elements of matrix A " << rowsA << "x" << colsA << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }
    cout << "Enter elements of matrix B " << rowsB << "x" << colsB <<endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> matrixB[i][j];
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    cout << "Resultant Matrix " << rowsA << "X" << colsB << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
