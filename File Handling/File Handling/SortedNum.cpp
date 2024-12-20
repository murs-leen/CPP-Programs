#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	int num[100];
	for (int i = 0; i < 100; i++)
	{
		num[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = i+1; j < 100; j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	ofstream fout;
	fout.open("sorted.txt");
	if (fout.is_open())
	{
		for (int i = 0; i < 100; i++)
			fout << num[i] << " ";
		cout << "Data has been written" << endl;
	}
	fout.close();
	ifstream fin;
	fin.open("sorted.txt");
	if (fin.is_open())
	{
		char num;
		while (!fin.eof())
		{
			fin.get(num);
			//getline(fin, num);
			cout << num;
		}
	}
	fin.close();
}