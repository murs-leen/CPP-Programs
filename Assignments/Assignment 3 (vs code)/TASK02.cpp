#include<iostream>
using namespace std;
int main()
{
	const int S = 500;
	int arr[S] = { 0 };
	int arr2[S] = { 0 };
	int num;
	cout << "Enter the size of array: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
	int nxt = 1, count = 0;
	for (int j = 0; j < num; j++)
	{
		if (arr[j] > arr[nxt]) {
			arr[count] = arr[j];
			count++;
		}
		nxt++;
	}
	cout << "Peak Elements: ";
	for (int j = 0; j < count; j++) 
	{
		cout << arr[j] << ", ";
	}
	cout << "\n Total peak elements: " << count;
	return 0;
}