#include <iostream>
#include <vector>
#include <conio.h>  // For _getch() and _kbhit()
#include <windows.h> // For system("cls") and Sleep()

using namespace std;

// Global constants
const int WIDTH = 20;
const int HEIGHT = 10;
int score = 0;
int lives = 3;
int level = 1; // Track the current level

// Game elements
char spaceship = '$';
char chicken = '&';
char egg = 'o';
char bullet = '*';
vector<string> grid(HEIGHT, string(WIDTH, ' ')); // 2D grid

// Spaceship position
int spaceshipX = WIDTH / 2;
int spaceshipY = HEIGHT - 1;

// Bullet properties
vector<pair<int, int>> bullets; // Vector of bullet positions
vector<pair<int, int>> eggs;    // Vector of egg positions
vector<pair<int, int>> chickens; // Vector of chicken positions

// Utility functions
void printGrid() {
    system("cls");
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            cout << grid[y][x];
        }
        cout << endl;
    }
    cout << "Score: " << score << "  Lives: " << lives << "  Level: " << level << endl;
}

void updateGrid() {
    // Clear grid
    for (auto& row : grid) fill(row.begin(), row.end(), ' ');

    // Update spaceship
    grid[spaceshipY][spaceshipX] = spaceship;

    // Update bullets
    for (auto bullet : bullets) {
        grid[bullet.second][bullet.first] = '*'; // Use bullet character
    }

    // Update eggs
    for (auto egg : eggs) {
        grid[egg.second][egg.first] = 'o'; // Use egg character
    }

    // Update chickens
    for (auto chicken : chickens) {
        grid[chicken.second][chicken.first] = '&'; // Use chicken character
    }
}

// Spaceship controls
void moveSpaceship(char direction) {
    if (direction == 'w' && spaceshipY > 0) spaceshipY--;
    if (direction == 's' && spaceshipY < HEIGHT - 1) spaceshipY++;
    if (direction == 'a' && spaceshipX > 0) spaceshipX--;
    if (direction == 'd' && spaceshipX < WIDTH - 1) spaceshipX++;
}

void shootBullet() {
    bullets.push_back({ spaceshipX, spaceshipY - 1 });
}

// Collision handling
void handleCollisions() {
    // Bullet hits chicken
    for (int i = 0; i < bullets.size(); i++) {
        for (int j = 0; j < chickens.size(); j++) {
            if (bullets[i] == chickens[j]) {
                score += 10;
                bullets.erase(bullets.begin() + i);
                chickens.erase(chickens.begin() + j);
                break;
            }
        }
    }

    // Egg hits spaceship
    for (int i = 0; i < eggs.size(); i++) {
        if (eggs[i].first == spaceshipX && eggs[i].second == spaceshipY) {
            lives--;
            eggs.erase(eggs.begin() + i);
            if (lives <= 0) {
                cout << "Game Over! Final Score: " << score << endl;
                exit(0);
            }
            break;
        }
    }
}

void nextLevel() {
    level++;
    if (level > 10) {
        cout << "Congratulations! You completed all levels! Final Score: " << score << endl;
        exit(0);
    }

    // Add more chickens for higher levels
    chickens.clear();
    for (int i = 0; i < level + 2; i++) {
        chickens.push_back({ rand() % WIDTH, 1 });
    }

    // Speed up game as levels increase
    printGrid();
}

// Main game loop
void gameLoop() {
    while (true) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'q') break; // Quit game
            if (key == ' ') shootBullet(); // Shoot bullet
            moveSpaceship(key); // Move spaceship
        }

        // Move bullets up
        for (auto& bullet : bullets) bullet.second--;

        // Remove bullets that go off-screen
        bullets.erase(remove_if(bullets.begin(), bullets.end(), [](pair<int, int> b) {
            return b.second < 0;
            }), bullets.end());

        // Move eggs down
        for (auto& egg : eggs) egg.second++;

        // Remove eggs that go off-screen
        eggs.erase(remove_if(eggs.begin(), eggs.end(), [](pair<int, int> e) {
            return e.second >= HEIGHT;
            }), eggs.end());

        // Chickens randomly drop eggs
        for (auto chicken : chickens) {
            if (rand() % (10 - level) == 0) eggs.push_back({ chicken.first, chicken.second + 1 });
        }

        // Update grid and check collisions
        updateGrid();
        handleCollisions();
        printGrid();

        // Check if all chickens are cleared
        if (chickens.empty()) nextLevel();

        // Sleep to control game speed
        Sleep(max(50, 150 - level * 10));
    }
}

int main() {
    // Initialize chickens for level 1
    for (int i = 0; i < level + 2; i++)
    {
        chickens.push_back({ rand() % WIDTH, 1 });
    }

    updateGrid();
    printGrid();
    gameLoop();

    return 0;
}