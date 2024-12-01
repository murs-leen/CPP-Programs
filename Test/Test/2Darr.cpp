#include<iostream>
using namespace std;

void func(int arr[][50], int size);
int main()
{
	const int size = 50;
	int arr[size][size];
	func(arr,size);
	return 0;
}

void func(int arr[][50], int size)
{
	for (int i = 0; i < 50; i++)
	{
		arr[i][i+1] = i;
		cout << arr[i] << " ";
	}
}