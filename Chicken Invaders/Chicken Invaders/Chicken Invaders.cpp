#include <iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

const int rows = 12;
const int cols = 50;

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
	initGrid();
	while (isGameRunning)
	{
		displayGrid();
		moveDucks();
		checkCollisions();
		moveFire();
		Sleep(0);
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
		}
		gotoxy(0, 0);
		//system("cls");
	}
	_getch();
	return 0;
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
	for (int j = 0; j < cols; j++)
		cout << '_';
	cout << '|';
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
	for (int i = rows - 2; i > 0; i--)
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
}
void gotoxy(int x, int y)
{
	COORD c = { (short)x, (short)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
