//#include<iostream>
//using namespace std;
//
//int findEquilibrium(int [], int);
//int main()
//{
//	const int S = 200;
//	int arr[S] = {0};
//	int size;
//	cout << "Enter the size of array : ";
//	cin >> size;
//	cout << "Enter the values in array : ";
//	for (int i = 0; i < size; i++)
//		cin >> arr[i];
//	int idx = findEquilibrium(arr, size);
//	if (idx != -1)
//		cout << "Equilibrium found at index : " << idx;
//	else
//		cout << "Equilibrium index not found";
//	return 0;
//}
//
//int findEquilibrium(int arr[], int size)
//{
//	int sum1 = 0, sum2 = 0;
//	for (int i = 1; i < size - 1; i++)
//	{
//		for (int j = i+1; j < size; j++)
//		{
//			sum1 += arr[j];
//		}
//		for (int k = i - 1; k >= 0; k--)
//		{
//			sum2 += arr[k];
//		}
//		if (sum1 == sum2)
//		{
//			return i;
//		}
//		sum1 = 0, sum2 = 0;
//	}
//	return -1;
//}