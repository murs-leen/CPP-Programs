#include<iostream>
using namespace std;

void isPerfect(int, int [], int S);
int main()
{
	cout << "All perfect numbers between 1 and 1000:" << endl;
	const int S = 20;
	int arr[S] = { 0 };
	int num = 1000;
	isPerfect(num, arr, S);
	return 0;
}
void isPerfect(int num, int arr[], int S)
{
	int sum = 0, count = 0;
	int j;
	for (int i = 2; i < 1000; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				arr[count] = j;
				count++;
				sum += j;
			}
		}
		if (sum == i)
		{
			cout << sum << ": is perfect number" << endl;
			cout << "Divisors: " << endl;
			for (int i = 0; i < count; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
		sum = 0;
		count = 0;
	}
}