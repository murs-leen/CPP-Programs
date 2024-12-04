//#include<iostream>
//using namespace std;
//
//const int S = 100;
//int func(int[], int, int);
//int main()
//{
//	int arr[S] = { 0 };
//	int sizeOfArr, k;
//	cout << "Enter the size of array:";
//	cin >> sizeOfArr;
//	cout << "How many 0's you want to flip:";
//	cin >> k;
//	int consecOnes = func(arr, sizeOfArr, k);
//	cout << "Maximum consecutive ones: " << consecOnes;
//	return 0;
//}
//
//int func(int arr[], int size, int k)
//{
//	int originalCount_K = k;
//	int count = 0, consecutive1s = 0, j = 0, i = 0;
//	cout << "Enter the 1s and 0s in array: ";
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] != 0 && arr[i] != 1)
//		{
//			cout << "Invalid input.. only binary values.." << endl;
//			return 1;
//		}
//	}
//
//	while (i < size)
//	{
//		while ((k > 0 || arr[j] != 0) && j < size)
//		{
//			if (arr[j] != 0)
//				count++;
//			else if (arr[j] == 0 && k > 0)
//			{
//				count++;
//				k--;
//			}
//			j++;
//		}
//		if (consecutive1s < count)
//			consecutive1s = count;
//		count = 0;
//		k = originalCount_K;
//		j = i;
//		i++;
//	}
//	return consecutive1s;
//}