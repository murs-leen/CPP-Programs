//#include<iostream>
//using namespace std;
//int main()
//{
//	const int rows = 30;
//	const int cols = 30;
//	int arr1[rows][cols];
//	int arr2[rows][cols];
//	int resultantMatrix[rows][cols];
//	for (int i = 0; i < rows; ++i)
//	{
//		for (int j = 0; j < cols; ++j)
//		{
//			resultantMatrix[i][j] = 0;
//		}
//	}
//
//	int nA, mA, nB,mB;
//	cout << "Enter number of rows and columns of matrix A: ";
//	cin >> mA >> nA;
//	cout << "Enter number of rows and columns of matrix B: ";
//	cin >> mB >> nB;
//	if (nA != mB)
//	{
//		cout << "Matrix can't be multiplied";
//		return 0;
//	}
//	else
//	{
//		//A
//		cout << "Enter elements of matrix A: ";
//		for (int i = 0; i < mA; ++i)
//		{
//			for (int j = 0; j < nA; ++j)
//			{
//				cin >> arr1[i][j];
//			}
//		}
//		//B
//		cout << "Enter elements of matrix B: ";
//		for (int i = 0; i < mB; ++i)
//		{
//			for (int j = 0; j < nB; ++j)
//			{
//				cin >> arr2[i][j];
//			}
//		}
//
//	//operation
//		for (int i = 0; i < mA; ++i)
//		{
//			for (int j = 0; j < nB; ++j)
//			{
//				for (int k = 0; k < nA; ++k)
//				{
//					resultantMatrix[i][j] = resultantMatrix[i][j] + arr1[i][k] * arr2[k][j];
//				}
//			}
//		} 
//		for (int i = 0; i < mA; ++i)
//		{
//			for (int j = 0; j < nB; ++j)
//			{
//				cout << resultantMatrix[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//}