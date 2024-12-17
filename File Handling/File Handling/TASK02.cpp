//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	ifstream fin;
//	ofstream fout;
//	int count = 0;
//	char ch;
//	fin.open("words.txt");
//	fout.open("count.txt");
//	while (!fin.eof())
//	{
//		fin.get(ch);
//		if(ch != '\n' && ch != ' ')
//			count++;
//	}
//	fout << "Total number of words in words.txt file:" << endl;
//	fout << count;
//	cout << count;
//}