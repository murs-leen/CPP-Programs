#include <iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

const int rows = 20;
const int cols = 70;

const char chicken = '&';
const char spaceShip = '$';
const char shoot = '*';
const char egg = 'o';

bool isGameRunning = true;
bool isRight = true;
int noOfRows = 0;
int shipPosX = rows - 1;
int shipPosY = cols / 2;
char grid[rows][cols];  

void gotoxy(int x, int y);
void intro();
char menu();
void instructions();
void topScores();
void initGrid();
void displayGrid();
void moveSpaceShip(char);
void moveDucks();
void moveDucksLeft(int);
void moveDucksRight(int);
void moveDucksDown();
void gameOver();
void checkCollisions();
void fire();
void moveFire();


int main()
{
	char userInput;
	intro();
	system("cls");
	userInput = menu();
	switch (userInput)
	{
	case '1':
		initGrid();
		while (isGameRunning)
		{
			displayGrid();
			moveDucks();
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
					gameOver();
					break;
				}
				case '\n':
					menu();
			}
			gotoxy(0, 0);
		}
		break;
	case '2':
		cout << "\n\t\t\tTop Scorers" << endl;
		topScores();
		break;
	case '3':
		instructions();
		break;
	case '4':
		gameOver();
		break;
	default:
		cout << "Invalid input...";
	}
	return 0;
}


void intro()
{
	cout << "\n\n\n\n\n\n\t\t\t\t\t Welcome to Chicken Invadors" << endl;
	cout << "\t\t\t\t\t\t\tLoading";
	for (int i = 0; i < 5; i++)
	{
		cout << ".";
		Sleep(1000);
	}
	cout << " Completed";
	Sleep(500);
}
char menu()
{
	system("cls");
	char input;
	bool flag = true;
	cout << endl;
	cout << "1. Start Game" << endl;
	cout << "2. Score Board" << endl;
	cout << "3. Want to learn" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your desire option: ";
	input = _getch();
	while (flag)
	{
		if (cin.fail() || input != '1' && input != '2' && input != '3' && input != '4')
		{
			cin.clear();
			cin.ignore();
			cout << "Wrong input..." << endl;
			cout << "Enter correct input: ";
			cin >> input;
		}
		else
			flag = false;
	}
	system("cls");
	return input;
}
void instructions()
{
	cout << "\n -> \'W'\ to move your space ship Above" << endl;
	cout << "\n -> \'S'\ to move your space ship Down" << endl;
	cout << "\n -> \'D'\ to move your space ship Right" << endl;
	cout << "\n -> \'A'\ to move your space ship Left" << endl;
	cout << "\n -> \'O'\ to Exit" << endl;
	cout << "\n\n Press any key to continue...";
	_getch();
	menu();
}
void topScores()
{
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

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 16; j+=4)
		{
			grid[i][j] = chicken;
		}
	}
	grid[shipPosX][shipPosY] = spaceShip;
}
void displayGrid()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << grid[i][j];
		}
		cout << '|';
		cout << endl;
	}
	//for (int j = 0; j < cols; j++)
	//	cout << '_';
}
void moveDucks()
{
	for (int i = 0; i < rows; i++)
	{
		if (i == rows - 1 && 
			((isRight && grid[i][cols - 1] == chicken) || 
			(!isRight && grid[i][0] == chicken))) 
		{
			gameOver();
			return;																				
		}

		if (isRight) { //moving towards right
			if (grid[i][cols - 1] == chicken) {
				isRight = false;
				moveDucksDown();
				return;
			}
			else
				moveDucksRight(i);
		}
		else { //moving towards left
			if (grid[i][0] == chicken) {
				isRight = true;
				moveDucksDown();
				return;
			}
			else
				moveDucksLeft(i);
		}
	}
}

void moveDucksLeft(int i) {
	for (int j = 0; j < cols; j++)
	{
		if ((j + 1) < cols && grid[i][j + 1] == chicken) {
			grid[i][j] = grid[i][j + 1];
			grid[i][j + 1] = ' ';
		}
	}
}
void moveDucksRight(int i) 
{
	for (int j = cols -1; j >= 0; j--)
	{
		if ((j - 1) > -1 && grid[i][j -1] == chicken) {
			grid[i][j] = grid[i][j - 1];
			grid[i][j - 1] = ' ';
		}
	}
}
void moveDucksDown() {
	for (int i = rows - 1; i > 0; i--)
	{
		for (int j = 0; j < cols; j++)
		{
			if (grid[i-1][j] == chicken && grid[i][j] == spaceShip) {
				gameOver();
				return;
			}

			if (grid[i-1][j] == chicken) {
				grid[i][j] = grid[i-1][j];
				grid[i-1][j] = ' ';
			}
		}
	}
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
				if(i != 0)
				grid[--i][j] = shoot;
			}
		}
	}
}
void checkCollisions()
{
	if (grid[shipPosX][shipPosY] == chicken)
		gameOver();
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
