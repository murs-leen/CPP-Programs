#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <ctime>
using namespace std;

const int rows = 20;
const int cols = 70;

const char chicken = '&';
const char spaceShip = '$';
const char shoot = '*';
const char egg = 'o';
int scores = 0;
bool flag = false;

bool isGameRunning = true;
bool isRight = true;
int noOfRows = 0;
int shipPosX = rows - 1;
int shipPosY = cols / 2;
char grid[rows][cols];
int chickenRowTrake = 0;
int level = 1;

void gotoxy(int x, int y);
void intro();
void menu();
void keyboardControls();
void instructions();
void topScores();
void initGrid();
void displayGrid();
void moveSpaceShip(char);
int moveDucks();
bool moveDucksLeft(int);
bool moveDucksRight(int);
void moveDucksDown();
void fire();
void moveFire();
void dropEggs();
void moveEggs();
void checkCollisions();
void gameOver();
void levelUp();
void worldCompleted();

int main()
{
    srand((unsigned)time(0)); 
    intro();
    return 0;
}

void intro()
{
    char userInput;
    cout << "\n\n\n\n\n\n\t\t\t\t Welcome to Chicken Invaders" << endl;
    cout << "\t\t\t\t\t\tLoading";
    for (int i = 0; i < 5; i++)
    {
        cout << ".";
        Sleep(200);
    }
    cout << " Completed";
    Sleep(1000);
    system("cls");
    menu();
}
void menu()
{
    system("cls");
    cout << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Score Board" << endl;
    cout << "3. Want to learn" << endl;
    cout << "4. Exit" << endl;
    keyboardControls();
}
void keyboardControls()
{
    int simulate = 0;
    char input;
    cout << "Enter your desire option: ";
    cin >> input;
    while (flag)
    {
        if (cin.fail() || input != '1' && input != '2' && input != '3' && input != '4')
        {
            cout << "Wrong input..." << endl;
            cout << "Enter correct input: ";
            cin >> input;
        }
        else
            flag = false;
    }
    system("cls");
    switch (input)
    {
    case '1':
        initGrid();
        while (isGameRunning)
        {
            displayGrid();
            if (moveDucks() == 0)
            {
                if (level >= 3)
                {
                    worldCompleted();
                    return;
                }
                simulate = 0;
                levelUp();
            }
            dropEggs();
            moveEggs();
            checkCollisions();
            moveFire();
            if (_kbhit())
            {
                char ch = _getch();
                switch (ch)
                {
                case 'a':
                case 'A':
                case 'd':
                case 'D':
                case 'w':
                case 'W':
                case 's':
                case 'S':
                    moveSpaceShip(ch);
                    break;
                case ' ':
                    fire();
                    break;
                case 'o':
                case 'O':
                    gameOver();
                    break;
                }
            }
            gotoxy(0, 0);
        }
        break;
    case '2':
        topScores();
        break;
    case '3':
        instructions();
        break;
    case '4':
        gameOver();
        break;
    }
}
void instructions()
{
    cout << "\n -> 'W' to move your space ship Above" << endl;
    cout << "\n -> 'S' to move your space ship Down" << endl;
    cout << "\n -> 'D' to move your space ship Right" << endl;
    cout << "\n -> 'A' to move your space ship Left" << endl;
    cout << "\n -> 'O' to Exit" << endl;
    cout << "\n\n Press any key to continue...";
    _getch();
    menu();
}
void topScores()
{
    cout << "\n\t\t\tTop Scorers" << endl;
    cout << "Press any key to continue...";
    _getch();
    menu();
}
void initGrid()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            grid[i][j] = ' ';
        }
    }
    switch (level)
    {
    case 1:
        for (int i = 0; i < level; i++)
        {
            for (int j = 0; j < 32; j += 4)
                grid[i][j] = chicken;
        }
        break;
    case 2:
        for (int i = 0; i < level + 1; i += 2)
        {
            for (int j = 0; j < 32; j += 4)
                grid[i][j] = chicken;
        }
        break;
    case 3:
        for (int i = 0; i < level + 2; i += 2)
        {
            for (int j = 0; j < 32; j += 4)
                grid[i][j] = chicken;
        }
    }
    grid[shipPosX][shipPosY] = spaceShip;
} //✔  
void displayGrid()
{
    for (int i = 0; i < rows; i++)
    {
        cout << "||";
        for (int j = 0; j < cols; j++)
            cout << grid[i][j];
        cout << "||";
        cout << endl;
    }
    for (int i = 0; i <= cols; i++)
        cout << "=";
    cout << "==";
    cout << "\n\n\n Scores : " << scores << "\tLevel : " << level;
} //✔
int moveDucks()
{
    int moveCount = 0; //for level up
    for (int i = chickenRowTrake; i < rows; i++)
    {
        if (isRight)
        {
            if (grid[i][cols - 1] == chicken)
            {
                isRight = false;
                moveDucksDown();
                return 1;
            }
            else if (moveDucksRight(i))
                moveCount++;
        }
        else
        {
            if (grid[i][0] == chicken)
            {
                isRight = true;
                moveDucksDown();
                return 1;
            }
            else if (moveDucksLeft(i))
                moveCount++;
        }
    }
    return moveCount;
}
bool moveDucksLeft(int i)
{
    flag = false;
    for (int j = 0; j < cols; j++)
    {
        if (grid[i][j] == chicken)
        {
            flag = true;
            grid[i][j - 1] = grid[i][j];
            grid[i][j] = ' ';
        }
    }
    return flag;
}
bool moveDucksRight(int i)
{
    flag = false;
    for (int j = cols - 2; j >= 0; j--)
    {
        if (grid[i][j] == chicken)
        {
            flag = true;
            grid[i][j + 1] = grid[i][j];
            grid[i][j] = ' ';
        }
    }
    return flag;
}
void moveDucksDown()
{
    for (int i = rows - 1; i > 0; i--)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[rows - 1][0] == chicken)
            {
                gameOver();
                return;
            }
            if (grid[i - 1][j] == chicken)
            {
                grid[i][j] = grid[i - 1][j];
                grid[i - 1][j] = ' ';
            }
        }
    }
    chickenRowTrake++;
}
void dropEggs()
{
    for (int i = chickenRowTrake; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == chicken && rand() % 20 == 0) // Randomly drop eggs
            {
                if (grid[i + 1][j] == ' ') // Ensure egg doesn't overwrite another object
                    grid[i + 1][j] = egg;
            }
        }
    }
}
void moveEggs()
{
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == egg)
            {
                grid[i][j] = ' ';
                if (i + 1 < rows)
                {
                    if (grid[i + 1][j] == spaceShip) // Egg hits spaceship
                        gameOver();
                    else
                        grid[i + 1][j] = egg;
                }
            }
        }
    }
}
void levelUp()
{
    //system("cls");
    cout << "\n\n\t\t\tWorld " << level << " has been completed" << endl;
    cout << "\n\t\t\tWorld " << level + 1 << " is loading";
    for (int i = 0; i < 5; i++) 
    {
        cout << ".";
        Sleep(500);
    }
    system("cls");
    level++;
    chickenRowTrake = 0;
    initGrid();
}
void fire()
{
    grid[shipPosX - 1][shipPosY] = shoot;
}
void moveFire()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == shoot)
            {
                grid[i][j] = ' ';
                if (i != 0)
                {
                    if (grid[i - 1][j] == chicken)
                        scores += 10;
                    grid[i - 1][j] = shoot;
                }
            }
        }
    }
}
void checkCollisions()
{
    if (grid[shipPosX][shipPosY] == chicken || grid[shipPosX][shipPosY] == egg)
    {
		grid[shipPosX][shipPosY] = spaceShip;
        gameOver();

    }
}
void moveSpaceShip(char ch)
{
    grid[shipPosX][shipPosY] = ' ';
    switch (ch)
    {
    case 'a':
    case 'A':
        if (shipPosY > 0)
            shipPosY--;
        break;
    case 'd':
    case 'D':
        if (shipPosY < cols - 1)
            shipPosY++;
        break;
    case 'w':
    case 'W':
        if (shipPosX > 0)
            shipPosX--;
        break;
    case 's':
    case 'S':
        if (shipPosX < rows - 1)
            shipPosX++;
        break;
    }
    grid[shipPosX][shipPosY] = spaceShip;
}
void worldCompleted()
{
    system("cls");
    cout << "\n\n\n\t\t-*-*-* Congratulations! You have completed all the Worlds -*-*-*-" << endl << endl;
    cout << "\t\t\t\tPress any key to continue...";
    _getch();
}
void gameOver()
{
    isGameRunning = false;
    system("cls");
    cout << "GAME OVER" << endl;
    _getch();
}
void gotoxy(int x, int y)
{
    COORD c = { (short)x, (short)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
