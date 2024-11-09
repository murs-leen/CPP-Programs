#include<iostream>
using namespace std;
int main() {

	int arr1[5];
	int arr2[5];
	int index;

	for (int i = 0; i < 5; i++) {
		cout << "Enter the element" << i << " : ";
		cin >> arr1[i];
	}

	index = 0;

	for (int i = 4; i >= 0; i--) {
		arr2[i] = arr1[index];
		index++;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << " , ";
	}
	cout <<  endl;
	cout << "Reversed array:";
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << " , ";
	}
    cout << endl; 
	return 0;
}