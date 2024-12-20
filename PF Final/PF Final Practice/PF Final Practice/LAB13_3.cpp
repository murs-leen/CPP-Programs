//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[3][5] = { {0},{0},{0} };
//	int max = 0, min = 0, sum = 0;
//	float avg;
//	for (int i = 0; i < 3; ++i)
//	{
//		cout << "Student :"<< i + 1 << endl;
//		cout << "Enter marks of 5 quizzes: ";
//		for (int j = 0; j < 5; ++j)
//		{
//			cin >> arr[i][j];
//		}
//		min = arr[0][0], max = arr[0][0];
//		for (int k = 1; k < 5; ++k)
//		{
//			if (max < arr[i][k])
//				max = arr[i][k];
//			if (min >= arr[i][k])
//				min = arr[i][k];
//			sum += arr[i][k];
//		}
//		avg = (float)sum / 5;
//		cout << "Min. marks :" << min << endl;
//		cout << "Max. marks :" << max << endl;
//		cout << "Avg. marks :" << avg << endl;
//		sum = 0,min = arr[0][0], max = arr[0][0];
//	}
//}