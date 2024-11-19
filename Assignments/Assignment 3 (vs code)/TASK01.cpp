#include<iostream>
using namespace std;
int main()
{
	const int S = 500;
	int arr[S] = { 0 };
	int num,num2;
	cout << "Enter the size of array: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "\nEnter the number you want to replace: ";
	cin >> num2;
	for (int j = 0; j < num; j++)
	{
		if (arr[j] == num2) {
			arr[j] = -1;
		}
	}
	cout << "Modified Array: ";
	for (int j = 0; j < num; j++)
	{
		cout << arr[j] << " ";
	}
	return 0;
}