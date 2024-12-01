//#include <iostream>
//#include <windows.h> // For Sleep()
//
//const int ROWS = 10;
//const int COLS = 40;
//void displayGrid(char arr[ROWS][COLS]) {
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            std::cout << arr[i][j];
//        }
//        std::cout << '\n';
//    }
//}
//
//
//void clearGrid(char arr[ROWS][COLS]) {
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            arr[i][j] = ' '; // Fill with spaces
//        }
//    }
//}
//
//int main() 
//{
//    char arr[ROWS][COLS];
//    clearGrid(arr); // Initialize the grid with spaces
//
//    int row = 0;       // Start at the top row
//    int direction = 1; // Moving right initially
//    int positions[4] = { 0, 1, 2, 3 }; // Initial positions of the 4 characters
//
//    while (true) {
//        // Clear the grid
//        clearGrid(arr);
//
//        // Update the positions in the current row
//        for (int i = 0; i < 4; ++i) 
//        {
//            arr[row][positions[i]] = 'A' + i; // Use 'A', 'B', 'C', 'D' as characters
//        }
//
//        // Display the grid
//        system("cls"); // Clear the console screen for a clean display
//        displayGrid(arr);
//
//        // Update positions
//        for (int i = 0; i < 4; ++i) {
//            positions[i] += direction;
//        }
//        // Check if we've hit the boundaries and need to change direction
//        if (direction == 1 && positions[3] == COLS - 1) { // Hit the right edge
//            direction = -1;
//            row = (row + 1) % ROWS; // Step down one row, wrap if needed
//        }
//        else if (direction == -1 && positions[0] == 0) { // Hit the left edge
//            direction = 1;
//            row = (row + 1) % ROWS; // Step down one row, wrap if needed
//        }
//
//
//        // Add a delay for better visualization
//        Sleep(80);
//    }
//    return 0;
//}
