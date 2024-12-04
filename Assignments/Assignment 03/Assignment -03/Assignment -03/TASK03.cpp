//#include <iostream>
//using namespace std;
//
//int main() {
//    const int S = 200; 
//    int matrix[S][S];
//    int m, n;
//    cout << "Enter number of rows: ";
//    cin >> m;
//    cout << "Enter number of columns: ";
//    cin >> n;
//    cout << "Enter the elements in " << m << " X " << n << " matrix: "<< endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    int spiral[S] = { 0 };
//    int index = 0, loopVar = 0;
//    int top = 0, bottom = m - 1, left = 0, right = n - 1;
//
//    while (loopVar < m * n) 
//    {
//        // Traverse from left to right on the top row
//        for (int i = left; i <= right; i++) {
//            spiral[index++] = matrix[top][i];
//        }
//        top++;
//        // Traverse from top to bottom on the right column
//        for (int i = top; i <= bottom; i++) {
//            spiral[index++] = matrix[i][right];
//        }
//        right--;
//
//        // Traverse from right to left on the bottom row
//        if (top <= bottom) {
//            for (int i = right; i >= left; i--) {
//                spiral[index++] = matrix[bottom][i];
//            }
//            bottom--; // Move bottom boundary up
//        }
//
//        // Traverse from bottom to top on the left column
//        if (left <= right) {
//            for (int i = bottom; i >= top; i--) {
//                spiral[index++] = matrix[i][left];
//            }
//            left++; // Move left boundary right
//        }
//        loopVar++;
//    }
//    cout << "Spiral :";
//    for (int i = 0; i < m * n; i++) 
//    {
//        cout << spiral[i] << " ";
//    }
//    cout << endl;
//    int rearranged[S] = { 0 };
//    int evenIndex = 0, oddIndex = 0;
//    for (int i = 0; i < m * n; i++) {
//        if (spiral[i] % 2 == 0) {
//            rearranged[evenIndex++] = spiral[i];
//        }
//    }
//
//    int count1 = 1;
//    for (int i = 0; i < evenIndex; i++)
//    {
//        for (int j = count1; j < evenIndex; j++)
//        {
//            if (rearranged[i] >= rearranged[j])
//            {
//                int temp = rearranged[j];
//                rearranged[j] = rearranged[i];
//                rearranged[i] = temp;
//            }
//        }
//        count1++;
//    }
//
//    oddIndex = evenIndex;
//    int count = 1;
//    for (int i = 0; i < m * n; i++) {
//        if (spiral[i] % 2 != 0) {
//            rearranged[oddIndex++] = spiral[i];
//        }
//    }
//
//    int count2 = evenIndex;
//    for (int i = evenIndex; i < m * n; i++)
//    {
//        for (int j = count2 + 1; j < m * n; j++)
//        {
//            if (rearranged[i] >= rearranged[j])
//            {
//                int temp = rearranged[j];
//                rearranged[j] = rearranged[i];
//                rearranged[i] = temp;
//            }
//        }
//        count2++;
//    }
//    cout << "Rearranged array:" << endl;
//    for (int i = 0; i < m * n; i++) {
//        cout << rearranged[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
