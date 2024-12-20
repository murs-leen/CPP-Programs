#include<iostream>
using namespace std;

void rotate_left(int[], int);
int main()
{
	const int S = 10;
	int arr[S] = { 2,3,5,6,4,7,4,3,3,12 };
	rotate_left(arr, S);
}
void rotate_left(int arr[], int size)
{
	int temp = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = temp;
	for (int i = 0;i < size; i++)
		cout << arr[i] << " ";
}