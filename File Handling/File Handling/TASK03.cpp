#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	ofstream file_1;
	ofstream file_2;
	file_1.open("file1.txt");
	file_2.open("file2.txt");
	file_1 << "This is file one.";
	file_2 << "This is file two.";
	file_1.close();
	file_2.close();
	ifstream file_1_input;
	ifstream file_2_input;
	ofstream merged;
	file_1_input.open("file1.txt");
	file_2_input.open("file2.txt");
	merged.open("merged.txt");
	while (!file_1_input.eof())
	{
		getline(file_1_input, line);
		merged << line;
	}
	while (!file_2_input.eof())
	{
		getline(file_2_input, line);
		merged << line;
	}
}