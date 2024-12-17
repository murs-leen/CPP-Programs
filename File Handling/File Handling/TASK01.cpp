//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main()
//{
//	ofstream writeInput;
//	writeInput.open("input.txt");
//	if (writeInput.is_open())
//	{
//		for (int i = 0; i < 20; i++)
//			writeInput << i << " ";
//	}
//	else
//		cout << "error";
//	writeInput.close();
//	ifstream readInput;
//	ofstream even;
//	int num;
//	readInput.open("input.txt");
//	even.open("even.txt");
//	if (readInput.is_open() && even.is_open())
//	{
//		even << "Even number" << endl;
//		while (!readInput.eof())
//		{
//			readInput >> num;
//			if (num % 2 == 0)
//			{
//			even << num << " ";
//			cout << num << " ";
//			}
//		}
//	}
//	else
//		cout << "error";
//}
