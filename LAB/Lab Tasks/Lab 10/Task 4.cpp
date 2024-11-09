#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const int S = 10;
	int arr1[S],arr2[10], power;
	for (int i = 0; i < S; i++)
	{
		cout << "Enter number" << i + 1 << " :";
		cin >> arr1[i];
	}
	for (int j = 0; j < 10; j++)
	{
		
		for (int i = 0; i < S; i++)
		{
			cout << arr1[i] << "^" << arr1[j] << "="<< pow(arr1[j], arr1[i])<<" ";
		}
		cout << endl;
	}
	return 0;
}