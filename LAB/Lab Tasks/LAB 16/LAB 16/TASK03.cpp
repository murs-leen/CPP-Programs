//Write a program to add two numbers.
//1. Write a C++ program that creates a file.
//2. Ask user to input two numbers
//3. Take their sum and store in variable.
//4. Write both numbers and their sum in file.
//5. Now read it from file and display
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int num1, num2, sum;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	sum = num1 + num2;
	ofstream outFile("sum.txt");
	if (outFile.is_open()) {
		outFile << "First Number: " << num1 << endl;
		outFile << "Second Number: " << num2 << endl;
		outFile << "Sum: " << sum << endl;
		outFile.close();
		cout << "Data has been written to sum.txt." << endl;
	}
	else {
		cout << "Error opening the file." << endl;
	}
	return 0;
}