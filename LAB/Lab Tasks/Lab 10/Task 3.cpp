#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int num;
	cout << "Enter a number : ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= (num - i); j++) { // print spaces
			cout << " ";
		}
		for (int k = 1; k <= i; k++) 
		{
			cout<< setw(2) << k;
		}
		cout << endl;
	}
	return 0;
}