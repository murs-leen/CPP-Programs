//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//bool isGameRunning = true;
//bool isRight = true;
//int chickenTrakcer;
//void intiChar(char grid[][50], int, int);
//void display(char grid[][50], int, int);
//void moveChars(char grid[][50], int, int);
//void moveRight(char grid[][50], int, int, int);
//void moveLeft(char grid[][50], int, int, int);
//void gameOver();
//
//int main()
//{
//	const int rows = 10;
//	const int cols = 50;
//	char grid[rows][cols];
//	intiChar(grid, rows, cols);
//	while (isGameRunning)
//	{
//		Sleep(50);
//		system("cls");
//		display(grid, rows, cols);
//		moveChars(grid, rows, cols);
//	}
//	return 0;
//}
//void intiChar(char grid[][50], int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			grid[i][j] = ' ';
//		}
//	}
//	for (int i = 0; i <= 32; i += 4)
//		grid[0][i] = '$';
//}
//void display(char grid[][50], int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << grid[i][j];
//		}
//		cout << "||";
//		cout << endl;
//	}
//}
//void moveChars(char grid[][50], int rows, int cols)
//{
//	int i = 0;
//		if (isRight)
//		{
//			if (grid[0][cols - 1] == '$')
//			{
//				isRight = false;
//			}
//			else
//				moveRight(grid, rows, cols, i);
//		}
//		if (!isRight)
//		{
//			if (grid[0][0] == '$')
//				isRight = true;
//			else
//				moveLeft(grid, rows, cols, i);
//		}
//}
//void moveRight(char grid[][50], int rows, int cols, int i)
//{
//	for (int j = cols - 2; j >= 0; j--)
//	{
//		if (grid[i][j] == '$')
//		{
//			grid[i][j + 1] = grid[i][j];
//			grid[i][j] = ' ';
//		}
//	}
//}
//void moveLeft(char grid[][50], int rows, int cols, int i)
//{
//	for (int j = 0; j < cols; j++)
//	{
//	    if (grid[i][j] == '$')
//	    {
//	        grid[i][j - 1] = grid[i][j];
//	        grid[i][j] = ' ';
//	    }
//	}
//}
//void gameOver()
//{
//	system("cls");
//	cout << "Game over";
//	isGameRunning = false;
//}