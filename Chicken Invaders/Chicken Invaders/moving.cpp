#include <iostream>
#include <thread>
#include <chrono>

const int ROWS = 20;
const int COLS = 20;

// Function to display the grid
void displayGrid(char grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << grid[i][j];
        }
        std::cout << std::endl;
    }
}

// Function to initialize the grid
void initializeGrid(char grid[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            grid[i][j] = ' ';
        }
    }
}

int main() {
    char grid[ROWS][COLS];
    int positions[] = { 3, 7, 11, 15 };  // Initial column positions for the characters
    char characters[] = { 'A', 'B', 'C', 'D' }; // Characters to move
    int rows[] = { 5, 10, 15, 8 }; // Rows for the characters
    int direction = 1; // Direction of movement for all characters (1 for right, -1 for left)

    while (true) {
        initializeGrid(grid); // Reset the grid

        // Place characters on the grid
        for (int i = 0; i < 4; ++i) {
            grid[rows[i]][positions[i]] = characters[i];
        }

        // Display the grid
        system("cls"); // For Windows; use "clear" for Linux/Mac
        displayGrid(grid);

        // Check if any character hits the boundary
        for (int i = 0; i < 4; ++i) {
            if (positions[i] == 0 || positions[i] == COLS - 1) {
                direction *= -1; // Reverse direction for all characters
                break;
            }
        }

        // Update character positions
        for (int i = 0; i < 4; ++i) {
            positions[i] += direction;
        }

        // Pause for a short time to create animation
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    return 0;
}
