//#include<iostream>
//using namespace std;
//int main()
//{
//	const int S = 500;
//	int arr[S] = { 0 };
//	int arr2[S] = { 0 };
//	int num;
//	cout << "Enter the size of array: ";
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Enter number " << i + 1 << ": ";
//		cin >> arr[i];
//	}
//	int count = 0;
//	for (int j = 0; j < num; j++)
//	{
//		if (j != 0 && j != num - 1)
//		{
//			if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1])
//			{
//				arr2[count] = arr[j];
//				count++;
//			}
//		}
//	}
//	cout << "Peak Elements: ";
//	for (int j = 0; j < count; j++)
//	{
//		cout << arr2[j] << ", ";
//	}
//	cout << "\n Total peak elements: " << count;
//	return 0;
//}