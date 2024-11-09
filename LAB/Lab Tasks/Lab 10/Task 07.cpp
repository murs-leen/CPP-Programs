#include<iostream>
using namespace std;
int main()
{
	const int N = 6;
	int arr1[N], total = 0;
	for (int i = 1; i < N; i++)
	{
		cout << "Enter your total sales for day " << i << ": ";
		cin >> arr1[i];
		total += arr1[i];
	}
	for (int i = 1; i < N; i++)
	{
		cout << "\nYour total sales for day " << i << " is: " << arr1[i];

	}
	cout << "\nYour total sale for the week is:" << total;
    cout << endl;

	system("pause");
}