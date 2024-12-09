//#include <iostream>
//using namespace std;
//
//int main() {
//    const int MAX_SIZE = 200;
//    int matrix[MAX_SIZE][MAX_SIZE];
//    bool visited[MAX_SIZE][MAX_SIZE] = { false };
//    int m, n, t;
//
//    cout << "Enter the number of rows (m): ";
//    cin >> m;
//    cout << "Enter the number of columns (n): ";
//    cin >> n;
//    cout << "Enter the target value (t): ";
//    cin >> t;
//
//    cout << "Enter the elements of the matrix:" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    int x = 0, y = 0; // Start at the top-left corner
//    visited[x][y] = true; // Mark the starting cell as visited
//
//    while (x < m && y < n) {
//        if (matrix[x][y] == t) {
//            cout << "Path Found" << endl;
//            return 0;
//        }
//
//        // Move right if possible and not visited
//        if (y + 1 < n && !visited[x][y + 1]) {
//            y++; // Move right
//        }
//        // Move down if possible and not visited
//        else if (x + 1 < m && !visited[x + 1][y]) {
//            x++; // Move down
//        }
//        else {
//            // No valid move available
//            cout << "No Path Found" << endl;
//            return 0;
//        }
//
//        visited[x][y] = true; // Mark the current cell as visited
//    }
//
//    // If no valid path includes the target value
//    cout << "No Path Found" << endl;
//    return 0;
//}
