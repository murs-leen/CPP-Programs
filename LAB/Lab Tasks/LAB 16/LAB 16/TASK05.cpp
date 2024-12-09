
#include <iostream>	
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	ofstream outFile("operations.txt");
	if (outFile.is_open()) {
		outFile << "Add: " << num1 + num2 << endl;
		outFile << "Subtract: "<< num1 - num2 << endl;
		outFile << "Multiply: " << num1 * num2 << endl;
		outFile << "Divide: " << num1 / num2 << endl;
		outFile << "Square root: "<< sqrt(num1) << endl;
		outFile << "Modulus: "  << num1 % num2 << endl;
		outFile.close();
		cout << "Data has been written to operations.txt." << endl;
	}
	else {
		cout << "Error opening the file." << endl;
	}
	ifstream inFile("operations.txt");
	if (inFile.is_open()) {
		string line;
		while (getline(inFile, line)) {
			cout << line << endl;
		}
		inFile.close();
	}
	else {
		cout << "Error opening the file." << endl;
	}
	return 0;
}
