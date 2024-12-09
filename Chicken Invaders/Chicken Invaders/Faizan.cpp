//#include <iostream>
//#include <windows.h>
//#include <conio.h>
//#include <ctime>
//#include <iomanip>
//#include <fstream>
//using namespace std;
//
//const int m = 20, n = 40;
//int row = 15, col = 19;
//const int maxBullets = 18;  // Maximum number of bullets allowed on screen at once
//bool bulletFired[maxBullets] = { false };  // Track multiple bullets
//int bulletRow[maxBullets], bulletCol[maxBullets];  // Store positions of bullets
//int chickens = 0;
//const int maxChicken = 19;
//bool chickenSpawned[maxChicken] = { false };
//int chickenRow[maxChicken], chickenCol[maxChicken];
//bool movingRight[maxChicken] = { true };
//int score = 0, lives = 3;
//const int maxEggs = 20;
//bool eggDropped[maxEggs] = { false };
//int eggRow[maxEggs], eggCol[maxEggs];
//int level = 1;
//int nextLevel = 190;
//int HScore[10];
//
//void showGrid(char grid[m][n], int row, int col);
//void updateGrid(char direction, int& row, int& col);
//void map_print(char grid[m][n]);
//void initialize_map(char grid[m][n]);
//void fireBullet();
//void processInput(char& direction);
//void updateBullets(char grid[m][n]);
//void initializeChickens();
//void updateChickens(char grid[m][n]);
//void updateEggs(char grid[m][n]);
//void dropEgg();
//bool gameOver();
//void stats();
//void fileHandling();
//
//int main() {
//    char grid[m][n];
//    char direction = '\0';
//
//    cout << setw(20) << right << "Level 1" << endl;
//    Sleep(1000);
//    system("CLS");
//    while (gameOver()) {
//        initialize_map(grid);  // Reset the grid before updating
//        processInput(direction);  // Process player input (movement and firing)
//        updateBullets(grid);  // Update bullet movement and logic
//        initializeChickens();
//        updateChickens(grid);
//        dropEgg();
//        updateEggs(grid);
//        showGrid(grid, row, col);  // Show the player and bullets
//        map_print(grid);  // Display the grid with updated positions
//
//        if (level == 1)
//            Sleep(100);  // 10FPS
//        else if (level == 2)
//            Sleep(50);   //20FPS
//        else if (level == 3)
//            Sleep(34);   //30FPS
//        else if (level == 4)
//        {
//            system("CLS");
//            cout << "Game Completed!";
//            break;
//        }
//        stats();
//        system("cls");  // Clear the console screen for the next frame
//    }
//    fileHandling();
//    if (lives <= 0)
//    {
//        cout << "Game Over!" << endl;
//    }
//    return 0;
//}
//
//// Function to initialize/reset the game grid
//void initialize_map(char grid[m][n]) {
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            grid[i][j] = ' ';  // Empty space
//        }
//    }
//}
//
//// Function to show the player and grid
//void showGrid(char grid[m][n], int row, int col) {
//    // Set boundary walls
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
//                grid[i][j] = '#';  // Boundary walls
//            }
//        }
//    }
//    // Set player position
//    grid[row][col] = '$';
//}
//
//// Function to display the game grid
//void map_print(char grid[m][n]) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << grid[i][j];
//        }
//        cout << endl;
//    }
//}
//
//// Function to handle player movement and firing
//void processInput(char& direction) {
//    if (_kbhit()) {
//        direction = _getch();  // Get input key
//        if (direction == 32) {  // Spacebar to fire (only if no bullet is currently fired)
//            fireBullet();  // Fire the bullet
//        }
//        updateGrid(direction, row, col);  // Update player position based on direction
//    }
//}
//
//// Function to update the player's position based on input
//void updateGrid(char direction, int& row, int& col) {
//    if (direction == 'W' || direction == 'w')
//        row--;
//    else if (direction == 'S' || direction == 's')
//        row++;
//    else if (direction == 'A' || direction == 'a')
//        col--;
//    else if (direction == 'D' || direction == 'd')
//        col++;
//
//    // Boundary checks to prevent going out of bounds
//    if (row <= 0) row = 1;
//    if (col <= 0) col = 1;
//    if (row >= m - 1) row = m - 2;
//    if (col >= n - 1) col = n - 2;
//}
//
//// Function to update the bullets' positions
//void updateBullets(char grid[m][n]) {
//    for (int i = 0; i < maxBullets; i++) {
//        if (bulletFired[i]) {
//            grid[bulletRow[i]][bulletCol[i]] = ' ';  // Clear the previous bullet position
//
//            // Move the bullet upwards
//            if (bulletRow[i] > 0) {
//                bulletRow[i]--;  // Move the bullet up
//            }
//            else {
//                bulletFired[i] = false;  // Stop the bullet when it hits the top
//            }
//
//            // Place the bullet at its new position
//            if (bulletRow[i] >= 0) {
//                grid[bulletRow[i]][bulletCol[i]] = '*';  // Display bullet at new position
//            }
//        }
//    }
//}
//
//// Function to fire a bullet
//void fireBullet() {
//    for (int i = 0; i < maxBullets; i++) {
//        if (!bulletFired[i]) {  // Find the first empty slot to fire a new bullet
//            bulletRow[i] = row - 1;  // Place the bullet just above the player
//            bulletCol[i] = col;      // Align the bullet with the player's column
//            bulletFired[i] = true;   // Mark the bullet as fired
//            break;  // Exit the loop after firing the bullet
//        }
//    }
//}
//
//void initializeChickens() {
//    for (int i = 0; i < maxChicken; i = i + level) {
//        if (!chickenSpawned[i] && chickens < maxChicken) {  // Only spawn new chickens if not already spawned
//            chickenRow[i] = 1;  // Top row
//            chickenCol[i] = (i * 2) % (n - 2) + 1; ; // Spread across columns
//            chickenSpawned[i] = true;
//            chickens++;
//        }
//    }
//    if (score >= nextLevel) {
//        level++;
//        chickens = 0;  // Reset chicken count for the new level
//        system("CLS");
//        if (level != 4)
//            cout << setw(20) << right << "Level: " << level;
//        Sleep(1000);
//        system("CLS");
//        nextLevel += 190;
//    }
//
//}
//
//
//void updateChickens(char grid[m][n]) {
//    for (int i = 0; i < maxChicken; ++i) {
//        if (chickenSpawned[i]) {
//            grid[chickenRow[i]][chickenCol[i]] = ' '; // Clear previous position
//            // Move chicken
//            if (movingRight[i]) {
//                if (chickenCol[i] < n - 1) {
//                    chickenCol[i]++;
//                }
//                else {
//                    movingRight[i] = false; // Change direction
//                    chickenRow[i]++;
//                }
//            }
//            else {
//                if (chickenCol[i] > 0) {
//                    chickenCol[i]--;
//                }
//                else {
//                    movingRight[i] = true; // Change direction
//                    chickenRow[i]++;
//                }
//            }
//
//            // Place chicken at new position
//            if (chickenRow[i] < m) {
//                grid[chickenRow[i]][chickenCol[i]] = '&';
//            }
//        }
//    }
//}
//bool gameOver() {
//    for (int i = 0; i < maxBullets; ++i) {
//        if (bulletFired[i]) {  // Only check collisions for active bullets
//            for (int j = 0; j < maxChicken; ++j) {
//                if (chickenSpawned[j] && bulletRow[i] == chickenRow[j] && bulletCol[i] == chickenCol[j]) {
//                    score += 10;  // Increase score
//                    bulletFired[i] = false;  // Remove the bullet
//                    chickenSpawned[j] = false;  // Remove the chicken
//                }
//            }
//        }
//    }
//
//    for (int j = 0; j < maxChicken; ++j) {
//        if (chickenSpawned[j]) {
//            // Check collision with player
//            if (chickenRow[j] == row && chickenCol[j] == col) {
//                lives--;  // Decrease lives
//                if (row != m - 1)
//                    row++;
//                chickenSpawned[j] = false;  // Remove the chicken
//            }
//
//            // Check if chicken reaches the bottom
//            if (chickenRow[j] >= m - 2) {
//                lives -= 3;  // Lose 3 lives
//                chickenSpawned[j] = false;  // Remove the chicken
//            }
//        }
//    }
//    for (int i = 0; i < maxEggs; ++i)
//        // Check for collision with the player
//        if (eggRow[i] == row && eggCol[i] == col) {
//            lives--;  // Player loses a life
//            eggDropped[i] = false;  // Remove the egg
//        }
//
//    if (lives > 0)
//        return true;
//    return false;
//}
//void dropEgg() {
//    srand(time(0));
//    for (int i = 0; i < maxChicken; ++i) {
//        if (chickenSpawned[i] && rand() % (12 / level) == 0) {  // Random chance to drop an egg
//            for (int j = 0; j < 2; ++j) {
//                if (!eggDropped[j]) {  // Find an empty slot for the new egg
//                    eggRow[j] = chickenRow[i] + 1;  // Start just below the chicken
//                    eggCol[j] = chickenCol[i];
//                    eggDropped[j] = true;
//                    break;
//                }
//            }
//        }
//    }
//}
//void updateEggs(char grid[m][n]) {
//    for (int i = 0; i < maxEggs; ++i) {
//
//        if (eggDropped[i]) {
//            grid[eggRow[i]][eggCol[i]] = ' ';  // Clear the previous position
//
//            // Move egg downwards
//            if (eggRow[i] < m - 1) {
//                eggRow[i]++;
//            }
//            else {
//                eggDropped[i] = false;  // Remove egg if it hits the bottom
//            }
//
//            // Place the egg at its new position
//            if (eggDropped[i]) {
//                grid[eggRow[i]][eggCol[i]] = 'O';  // Display the egg
//            }
//        }
//    }
//}
//void stats() {
//    cout << endl << "Level:" << level << endl;
//    cout << "Score:" << score << endl;
//    cout << "Lives:" << lives << endl;
//}
//void fileHandling() {
//    int count = 0;
//    int temp[10];
//    int value;
//    ifstream read;
//    read.open("HighScore.txt");
//    while (count < 10) {
//        read >> value;
//        HScore[count] = value;
//        count++;
//    }
//    read.close();
//    int min = HScore[0], minIndex = 0;
//    for (int i = 0; i < 10; ++i) {
//        if (min > HScore[i])
//        {
//            min = HScore[i];
//            minIndex = i;
//        }
//
//    }
//    if (min < score) {
//        HScore[minIndex] = score;
//    }
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 9 - i; ++j) {
//            if (HScore[j] > HScore[j + 1])
//            {
//                int temp = HScore[j];
//                HScore[j] = HScore[j + 1];
//                HScore[j + 1] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < 10; ++i) {
//        temp[i] = HScore[9 - i];
//    }
//    for (int i = 0; i < 10; ++i) {
//        HScore[i] = temp[i];
//    }
//    ofstream write;
//    write.open("HighScore.txt");
//    for (int i = 0; i < 10; ++i)
//    {
//        write << HScore[i] << endl;
//    }
//}