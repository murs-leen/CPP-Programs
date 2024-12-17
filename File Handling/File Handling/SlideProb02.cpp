//#include<iostream>
//#include<fstream>
//
//using namespace std;
//int main()
//{
//	ifstream fin;
//	ofstream fout;
//	fin.open("employeein.txt");
//	fout.open("emplyeeout.txt");
//	if (fin.is_open() && fout.is_open())
//	{
//		string name;
//		int salary;
//		fout << "Name" << "\t" << "Salary" << endl;
//		while (!fin.eof())
//		{
//			fin >> name >> salary;
//			fout << name << "\t" << salary + 2000 << endl;
//		}
//	}
//	else
//		cout << "File opening error..";
//	fin.close();
//	fout.close();
//}
