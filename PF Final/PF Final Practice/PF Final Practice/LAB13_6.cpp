//#include<iostream>
//using namespace std;
//int main()
//{
//	const int rows = 50;
//	const int cols = 50;
//	int arr[rows][cols];
//	bool saddle = true;
//	cout << "Enter number of rows and cols of matrix : ";
//	int row, col;
//	cin >> row >> col;
//	cout << "Enter elements in matrix : " << endl;
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j < col; ++j)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cout << "Saddle point : ";
//	for (int i = 0; i < row; ++i)
//	{
//		int min = arr[i][0], index = 0;
//		for (int j = 1; j < col; ++j)
//		{
//			if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				index = j;
//			}
//		}
//
//		for (int j = 0; j < row; ++j)
//		{
//			if (min < arr[j][index])
//			{
//				saddle = false;
//				break;
//			}
//		}
//		if (saddle)
//			cout << min << " ";
//		saddle = true;
//	}
//}