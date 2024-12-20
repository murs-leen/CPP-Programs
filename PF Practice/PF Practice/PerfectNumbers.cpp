#include<iostream>
using namespace std;

void perfectNum();
int main()
{
	perfectNum();
}
void perfectNum()
{
	int arr[10] = { 0 };
	int sum = 0, count = 0;
	for (int i = 1; i < 500; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				arr[count] = j;
				sum += j;
				count++;
			}
		}
		if (sum == i)
		{
			cout << i << "is a perfect number" << endl;
			cout << "Divisors : ";
			for (int i = 0; i < count; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
		sum = 0; 
		count = 0;
	}
}