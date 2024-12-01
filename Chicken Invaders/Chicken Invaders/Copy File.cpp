//#include <iostream>
//#include<conio.h>
//#include<Windows.h>
//using namespace std;
//
//const int rows = 12;
//const int cols = 50;
//
//const char chicken = '&';
//const char spaceShip = '$';
//const char shoot = '*';
//const char egg = 'o';
//
//bool isGameRunning = true;
//bool isRight = true;
//int noOfRows = 0;
//int direction = 1;
//int shipPosX = rows - 1;
//int shipPosY = cols / 2;
//char grid[rows][cols];
//
//void gotoxy(int x, int y);
//void initGrid(int position[], int size);
//void displayGrid();
//void moveSpaceShip(char);
//void moveDucks(int position[], int size);
//void gameOver();
//void checkCollisions();
//void fire();
//void moveFire();
//
//int main()
//{
//	const int size = 16;
//	int position[size] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//	initGrid(position, size);
//	while (isGameRunning)
//	{
//		displayGrid();
//		moveDucks(position, size);
//		checkCollisions();
//		moveFire();
//		Sleep(50);
//		if (_kbhit())
//		{
//			char ch = _getch();
//			switch (ch)
//			{
//			case 'a':
//			case 'A':
//			case 'd':
//			case 'D':
//			case 'w':
//			case 'W':
//			case 's':
//			case 'S':
//				moveSpaceShip(ch);
//				break;
//			case ' ':
//				fire();
//				break;
//			case 'o':
//				gameOver();
//				break;
//			}
//		}
//		gotoxy(0, 0);
//		//system("cls");
//	}
//	_getch();
//	return 0;
//}
//
//void initGrid(int position[], int size)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			grid[i][j] = ' ';
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < size; j += 4)
//		{
//			grid[i][position[j]] = chicken;
//		}
//	}
//	grid[shipPosX][shipPosY] = spaceShip;
//}
//void displayGrid()
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << grid[i][j];
//		}
//		//cout << '|';
//		cout << endl;
//	}
//	//for (int j = 0; j < cols; j++)
//	//	cout << '_';
//	//cout << '|';
//}
//void moveDucks(int position[], int size)
//{
//	for (int i = noOfRows; i < noOfRows + 3; i++)
//	{
//		for (int j = 0; j < size; j += 4)
//		{
//			grid[i][position[j]] = ' ';
//			grid[i][position[j]] = chicken;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		position[i] += direction;
//	}
//	if (noOfRows == 10)
//		gameOver();
//
//	if (direction == 1 && position[size - 1] == cols - 1)
//	{
//		direction = -1;
//		noOfRows = noOfRows + 1;
//	}
//	else if (direction == -1 && position[0] == 0)
//	{
//		direction = 1;
//		noOfRows = noOfRows + 1;
//	}
//}
//void fire()
//{
//	grid[shipPosX - 1][shipPosY] = shoot;
//
//}
//void moveFire()
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (grid[i][j] == shoot)
//			{
//				grid[i][j] = ' ';
//				if (i != 0)
//					grid[--i][j] = shoot;
//			}
//		}
//	}
//}
//void checkCollisions()
//{
//	if (grid[shipPosX][shipPosY] == chicken)
//		gameOver();
//
//}
//void moveSpaceShip(char ch)
//{
//	grid[shipPosX][shipPosY] = ' ';
//	switch (ch)
//	{
//	case 'a':
//	case 'A':
//		if (shipPosY > 0)
//			shipPosY--;
//		break;
//	case 'd':
//	case 'D':
//		if (shipPosY < cols - 1)
//			shipPosY++;
//		break;
//	case 'w':
//	case 'W':
//		if (shipPosX > 0)
//			shipPosX--;
//		break;
//	case 's':
//	case 'S':
//		if (shipPosX < rows - 1)
//			shipPosX++;
//		break;
//	}
//	grid[shipPosX][shipPosY] = spaceShip;
//}
//void gameOver()
//{
//	isGameRunning = false;
//	system("cls");
//	cout << "GAME OVER" << endl;
//}
//void gotoxy(int x, int y)
//{
//	COORD c = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
