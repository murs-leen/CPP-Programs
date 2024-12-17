//#include<iostream>
//#include<string>
//using namespace std;
//
//void morseCode(string [][6], int, int,string);
//int main()
//{
//	const int rows = 27;
//	const int cols = 6;
//	string table[rows][cols] = {"..--.",".---.";
//	string str;
//	cout << "Enter the code : ";
//	cin >> str;
//	morseCode(table, rows, cols, str);
//}
//void morseCode(string table[][6], int rows, int cols, string str)
//{
//	int leng = str.length() - 1;
//	char fixedChar[5] = { '\0' };
//	int st = 0;
//
//	for (int i = 0; i <= leng; i+=5)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			fixedChar[j] = str[st];
//			st++;
//		}
//		string newStr;
//		for (int i = 0; i < 5; i++)
//			newStr = fixedChar[i];
//
//
//		for (int i = 0; i <rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				if (newStr == table[i][j])
//					cout << table[i][j];
//			}
//		}
//	}
//}