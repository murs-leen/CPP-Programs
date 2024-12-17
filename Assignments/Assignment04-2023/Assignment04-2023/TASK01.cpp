//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//bool checkInvers(float[][2], int, int, float[][2], int, int);
//int main()
//{
//	cout << fixed << setprecision(2) << showpoint;
//	const int rows = 2;
//	const int cols = 2;
//	float matrix_1[rows][cols];
//	float matrix_2[rows][cols];
//	cout << "For matrix A:" << endl;
//	cout << "Enter the values(2 X 2): " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> matrix_1[i][j];
//		}
//	}
//	bool isInverse = checkInvers(matrix_1, rows, cols, matrix_2, rows, cols);
//	(isInverse == true) ? cout << "Matrix B is inverse of A" : cout << "Matrix B is not inverse of A";
//	return 0;
//}
//bool checkInvers(float matrix_1[][2],  int rows, int cols, float matrix_2[][2], int m, int n)
//{
//	float mode = matrix_1[0][0] * matrix_1[1][1] - matrix_1[0][1] * matrix_1[1][0];
//	cout << "Mode = " << mode << endl;
//	if (mode == 0)
//		return false;
//
//	//changing the location
//	float temp = matrix_1[0][0];
//	matrix_1[0][0] = matrix_1[1][1];
//	matrix_1[1][1] = temp;																							 
//
//	//changing the sign
//	matrix_1[0][1] = (-1) * matrix_1[0][1];
//	matrix_1[1][0] = (-1) * matrix_1[1][0];
//	
//
//	cout << "Inverse of matrix A: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			matrix_1[i][j] = matrix_1[i][j] / mode;
//			cout << matrix_1[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << "For matrix B:" << endl;
//	cout << "Enter the values(2 X 2): " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> matrix_2[i][j];
//		}
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (matrix_1[i][j] != matrix_2[i][j])
//				return false;
//		}
//	}
//	return true;
//} 
