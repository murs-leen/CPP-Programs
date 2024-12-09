//#include<iostream>
//using namespace std;
//int main() {
//    const int S = 200;
//    int matrix[S][S] = { 0 };
//    int noOfRows, noOfCols;
//    cout << "Enter the number of rows (n): ";
//    cin >> noOfRows;
//    cout << "Enter the number of columns (m): ";
//    cin >> noOfCols;
//    cout << "Enter the elements of the matrix:" << endl;
//    for (int i = 0; i < noOfRows; i++) {
//        for (int j = 0; j < noOfCols; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//    int spiralSum = 0;
//    int top = 0, bottom = noOfRows - 1, left = 0, right = noOfCols - 1;
//
//    while (top <= bottom && left <= right)
//    {
//        // top
//        for (int i = left; i <= right; i++)
//        {
//            spiralSum += matrix[top][i];
//        }
//        top++;
//
//        // Right
//        for (int i = top; i <= bottom; i++)
//        {
//            spiralSum += matrix[i][right];
//        }
//        right--;
//        // Bottom
//        for (int i = right; i >= left; i--)
//        {
//            spiralSum += matrix[bottom][i];
//        }
//        bottom--;
//        // Left
//        for (int i = bottom; i >= top; i--)
//        {
//            spiralSum += matrix[i][left];
//        }
//        left++;
//    }
//    
//    // Sort Each Row
//    for (int i = 0; i < noOfRows; i++){
//        int count = 1;
//         for (int j = 0; j < noOfCols - 1; j++){
//            for (int k = count; k < noOfCols; k++){
//                if (matrix[i][j] > matrix[i][k]){
//                    int temp = matrix[i][k];
//                    matrix[i][k] = matrix[i][j];
//                    matrix[i][j] = temp;
//                }
//            }
//            count++;
//         }
//    }
//    cout << "Spiral Sum: " << spiralSum << endl;
//    cout << "Modified Matrix with Sorted Rows:" << endl;
//    for (int i = 0; i < noOfRows; i++) {
//        for (int j = 0; j < noOfCols; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}