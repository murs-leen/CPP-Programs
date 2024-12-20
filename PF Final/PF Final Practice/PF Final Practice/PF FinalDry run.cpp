#include <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;

int main() {
    const int n = 40;
    cout << "Rows and cols:";
    int dim;
    cin >> dim;

    int matrix[n][n];
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            matrix[i][j] = rand() % 50 + 1;
            cout << setw(2) << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int layer = 0; layer < dim / 2; ++layer) {
        int first = layer;
        int last = dim - layer - 1;

        for (int i = first; i < last; ++i) {
            int shift = i - first;
            int top = matrix[first][i];
            matrix[first][i] = matrix[last - shift][first];
            matrix[last - shift][first] = matrix[last][last - shift];
            matrix[last][last - shift] = matrix[i][last];
            matrix[i][last] = top;
        }
    }

    cout << endl;
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            cout << setw(2) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}