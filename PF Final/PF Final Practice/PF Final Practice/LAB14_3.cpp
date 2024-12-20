//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int main()
//{
//	const int rows = 50;
//	const int cols = 50;
//	int arr[rows][cols];
//	int spiral[cols];
//	int r, c;
//	cout << "Enter rows and cols : ";
//	cin >> r >> c;
//	cout << "Enter the values in " << r << " X " << c << " : " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int index = 0;
//	int top = 0, bottom = r - 1, left = 0, right = c - 1;
//
//	while (top <= bottom && left <= right)
//	{
//		//top
//		for (int i = left; i <= right; ++i)
//		{
//			spiral[index++] = arr[top][i];
//		}
//		top++;
//		//right
//		for (int i = top; i <= bottom; ++i)
//		{
//			spiral[index++] = arr[i][right];
//		}
//		right--;
//		//bottom
//		for (int i = right; i >= left; --i)
//		{
//			spiral[index++] = arr[bottom][i];
//		 }
//		bottom--;
//		//left
//		for (int i = bottom; i >= top; --i)
//		{
//			spiral[index++] = arr[i][left];
//		}
//		left++;
//	}
//
//	cout << "Spiral : ";
//	for (int i = 0; i < r * c; ++i)
//		cout << spiral[i] << " ";
//}