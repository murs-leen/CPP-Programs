//#include<iostream>
//using namespace std;
//
//int eliminate_duplicates(int[],int&);
//int main()
//{
//	const int S = 100;
//	int size;
//	int arr[S] = { -1 };
//	cout << "Enter the size of array : ";
//	cin >> size;
//	cout << "Enter the elements of array: ";
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//
//	int updatedSize = eliminate_duplicates(arr, size);
//	cout << "Size after removing duplicates : " << size << endl;
//	cout << "Updated array : " << endl;
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
//int eliminate_duplicates(int arr[], int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size;)
//		{
//			if (arr[i] == arr[j])
//			{
//				for (int k = j; k < size - 1; ++k)
//				{
//					arr[k] = arr[k + 1];
//				}
//				size--;
//			}
//			else
//				j++;
//		}
//	}
//	return size;
//}
