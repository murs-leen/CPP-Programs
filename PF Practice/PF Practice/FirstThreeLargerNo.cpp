//#include<iostream>
//using namespace std;
//
//double findAverage(int [], int);
//void findLargestOnes(int [], int,int&, int& , int&);
//
//int main()
//{
//	const int S = 100;
//	int arr[S] = { 0 };
//	int temp, largest = 0, secLargest = 0,thirdLargest = 0;
//	int i = 0;
//	do
//	{
//		cout << "Please enter a number : ";
//		cin >> temp;
//		if (temp >= 0)
//		{
//			arr[i] = temp;
//			i++;
//		}
//	} while (temp >= 0);
//	if (i < 3)
//	{
//		cout << "Unsufficinet values..";
//		return 1;
//	}
//	cout << "Average : " << findAverage(arr,i) << endl;
//	findLargestOnes(arr,i,largest, secLargest, thirdLargest);
//	cout << "Largest one : " << largest << endl;
//	cout << "Second largest : " << secLargest << endl;
//	cout << "Third largest : " << thirdLargest << endl;
//	return 0;
//}
//
//double findAverage(int arr[], int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//	double avg = (double)sum / size;
//	return avg;
//}
//
//void findLargestOnes(int arr[], int size, int& largest, int& secLargest, int& thirdLargest)
//{
//	largest = secLargest = thirdLargest = -1;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > largest)
//		{
//			thirdLargest = secLargest;
//			secLargest = largest;
//			largest = arr[i];
//		}
//		else if (arr[i] > secLargest)
//		{
//			thirdLargest = secLargest;a
//			secLargest = arr[i];
//		}
//		else if (arr[i] > thirdLargest)
//			thirdLargest = arr[i];
//	}
//}
