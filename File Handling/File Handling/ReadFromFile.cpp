//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	ifstream fin;
//	fin.open("personal.txt");
//	if (fin.is_open())
//	{
//		int i = 0;
//		string line;
//		char ch;
//		while (!fin.eof()) 
//		{
//			//getline(fin, line); //get the whole line
//			fin.get(ch);
//			if(!fin.eof())
//				cout << ch; //get single character
//			//cout << line << endl;
//		}
//	}
//	else
//		cout << "File opening error";
//	fin.close();
//}