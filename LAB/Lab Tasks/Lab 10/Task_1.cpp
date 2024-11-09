#include<iostream>
using namespace std;
int main()
{
	int size, i, j;

	cout << "Enter the size : ";
	cin >> size;

	// //Upper Half
	for (int i = 0; i < size / 2 + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < size - 2 * i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	// //Lower Half
	for (int i = size / 2 - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < size - 2 * i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}