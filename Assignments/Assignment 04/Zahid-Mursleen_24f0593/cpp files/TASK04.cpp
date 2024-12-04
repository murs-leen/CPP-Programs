//#include<iostream>
//#include<string>
//using namespace std;
//
//string reverseVowels(string);
//bool isVowel(char);
//int main()
//{
//	string str;
//	cout << "Enter string:";
//	getline(cin,str);
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
//	int leng = 0;
//	for (int i = 0;  str[i] != '\0'; i++)
//		leng++;
//	int st = 0;
//	while (st < leng)
//	{
//		if (!isVowel(str[st]))
//		{
//			st++;
//			continue;
//		}
//		if (!isVowel(str[leng]))
//		{
//			leng--;
//			continue;
//		}
//		char temp = str[leng];
//		str[leng] = str[st];
//		str[st] = temp;
//		st++;
//		leng--;
//	}
//	return str;
//}