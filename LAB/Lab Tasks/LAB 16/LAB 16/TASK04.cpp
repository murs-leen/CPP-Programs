//1. Write a program to initialize 100 randomly generated numbers.
//2. Sort all numbers in ascending order.
//3. Write all sorted numbers in file sortednumbers.txt.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int numbers[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		numbers[i] = rand() % 1000;
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100 - i - 1; j++) {
			if (numbers[j] > numbers[j + 1]) {
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	ofstream outFile("sortednumbers.txt");
	if (outFile.is_open()) {
		for (int i = 0; i < 100; i++) {
			outFile << numbers[i] << " ";
		}
		outFile.close();
		cout << "Data has been written to sortednumbers.txt." << endl;
	}
	else {
		cout << "Error opening the file." << endl;
	}
	return 0;
}