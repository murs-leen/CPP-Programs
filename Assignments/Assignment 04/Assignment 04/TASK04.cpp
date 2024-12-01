//#include<iostream>
//using namespace std;
//
//string reverseVowels(string);
//bool isVowel(char);
//int main()
//{
//	string str;
//	cout << "Enter string:";
//	cin >> str;
//	string updatdStr = reverseVowels(str);
//	cout << updatdStr;
//	return 0;
//}
//bool isVowel(char ch)
//{
//	if (ch == 'a' || ch == 'e' ||
//		ch == 'i' || ch == 'o' ||
//		ch == 'u' || ch == 'A' ||
//		ch == 'E' || ch == 'I' ||
//		ch == 'O' || ch == 'U')
//		return true;
//	return false;
//}
//string reverseVowels(string str)
//{
//	int st = 0, ed = str.length() - 1;
//	while (st < ed)
//	{
//		if (!isVowel(str[st]))
//		{
//			st++;
//			continue;
//		}
//		if (!isVowel(str[ed]))
//		{
//			ed--;
//			continue;
//		}
//		char temp = str[ed];
//		str[ed] = str[st];
//		str[st] = temp;
//		st++;
//		ed--;
//	}
//	return str;
//}