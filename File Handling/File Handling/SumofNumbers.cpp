//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//int main()
//{
//	int num1, num2;
//	string str;
//	cout << "Enter two numbers : ";
//	cin >> num1 >> num2;
//	int sum = num1 + num2;
//	ofstream fout;
//	fout.open("sum.txt");
//	if (fout.is_open())
//	{
//		fout << "Number 1 : " << num1 << endl;
//		fout << "Number 2 : " << num2 << endl;
//		fout << "Sum = " << sum << endl;
//		cout << "Data has been stored successfully..."<< endl;
//	}
//	else
//		cout << "File opening error.";
//	fout.close();
//	ifstream fin;
//	fin.open("sum.txt");
//	if (fin.is_open())
//	{
//		while (!fin.eof())
//		{
//			getline(fin, str);
//			if (!fin.eof())
//				cout << str << endl;
//		}
//	}
//	fin.close();
//}