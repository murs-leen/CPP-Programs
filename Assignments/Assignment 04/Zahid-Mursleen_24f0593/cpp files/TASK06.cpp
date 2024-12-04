//#include<iostream>
//using namespace std;
//
//int max(int [],int);
//int min(int [],int);
//float avg(int [],int);
//int odd(int [], int);
//int even(int[], int);
//void sortingArr(int[], int);
//float median(int[],int);
//void duplicateElm(int[],int);
//int main()
//{
//	const int S = 250;
//	int arr[S] = { 0 };
//	cout << "\t-*-*-*-*-Advanced Statistical Analysis-*-*-*-*-\n";
//	char ch;
//	cout << "1. Max and Min\n";
//	cout << "2. Average\n";
//	cout << "3. Count odd and Even\n";
//	cout << "4. Sort the Array (Ascending order)\n";
//	cout << "5. Median\n";
//	cout << "6. Check for duplications\n\n";
//	cout << "Enter the desired option:";
//	cin >> ch;
//	cout << "Enter the size of an array:";
//	int size;
//	cin >> size;
//	cout << "Enter the array:";
//	for (int i = 0; i < size; i++)
//		cin >> arr[i];
//	switch (ch)
//	{
//	default:
//		cout << "Invalid desired option....";
//		break;
//	case '1':
//		cout << "Maximum value: " << max(arr, size) << endl;
//		cout << "Minimum value: " << min(arr, size) << endl;
//		break;
//	case '2':
//		cout << "Average: " << avg(arr, size) << endl;
//		break;
//	case '3':
//		cout << "Odd numbers: " << odd(arr, size) << endl;
//		cout << "Even numbers: " << even(arr, size) << endl;
//		break;
//	case '4':
//		sortingArr(arr, size);
//		cout << "Sorted array in (Ascending order):\n ";
//		for (int i = 0; i < size; i++)
//			cout << arr[i] << " ";
//		break;
//	case '5':
//		median(arr, size);
//		cout << "Medain : " << median(arr, size) << endl;
//		break;
//	case '6':
//		duplicateElm(arr, size);
//		break;
//	}
//	return 0;
//}
//int max(int arr[], int size)
//{
//	int max = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	return max;
//}
//int min(int arr[], int size)
//{
//	int min = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//	}
//	return min;
//}
//float avg(int arr[], int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//	float avg = static_cast<float>(sum)/ size;
//	return avg;
//}
//int odd(int arr[], int size)
//{
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 != 0)
//			count++;
//	}
//	return count;
//}
//int even(int arr[], int size)
//{
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 == 0)
//			count++;
//	}
//	return count;
//}
//void sortingArr(int arr[], int size)
//{
//	int count = 1;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = count; j < size; j++)
//		{
//			if (arr[i] >= arr[j])
//			{
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//		count++;
//	}
//}
//float median(int arr[], int size)
//{
//	int index;
//	sortingArr(arr,size);
//	if (size % 2 != 0)
//	{
//		index = (size / 2);
//		return arr[index];
//	}
//	index = (size / 2);
//	return (arr[index] + arr[index - 1])/2.0;
//}
//void duplicateElm(int arr[], int size) 
//{
//	bool hasDuplicates = false;
//	cout << "Duplicates: ";
//	for (int i = 0; i < size; ++i) {
//		for (int j = i + 1; j < size; ++j) {
//			if (arr[i] == arr[j]) 
//			{
//				cout << arr[i] << " ";
//				hasDuplicates = true;
//				break;
//			}
//		}
//	}
//
//	if (!hasDuplicates) {
//		cout << "No duplicates found.";
//	}
//	cout << endl;
//}