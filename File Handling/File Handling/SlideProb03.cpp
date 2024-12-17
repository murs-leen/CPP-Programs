//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	ofstream fout;
//	string name;
//	int salary;
//	fout.open("App_test.txt", ios::app);
//	if (fout.is_open())
//	{
//		for (int i = 0; i < 5; ++i)
//		{
//			cout << "Enter your name and salary : ";
//			cin >> name >> salary;
//			fout << name << "\t" << salary << endl;
//		}
//		cout << "Data has been written successfully...";
//	}
//	fout.close();
//	ifstream fin;
//	fin.open("App_test.txt");
//	if (fin.is_open())
//	{
//		cout << "Name " << "\t" << "Salary" << endl;
//		while (!fin.eof())
//		{
//			fin >> name >> salary;
//			cout << name << "\t" << salary << endl;
//		}
//		cout << "All data has been retrived successfully:)";
//	}
//	fin.close();
//}
 