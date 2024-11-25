//#include<iostream>
//using namespace std;
//
//bool palindromStr(string);
//int main()
//{
//	string str;
//	cout << "Enter a string:";
//	cin >> str;
//	bool isPalindrome = palindromStr(str);
//	if (!isPalindrome)
//		cout << "String is not a palindrome";
//	else
//		cout << "String is palindrome";
//	return 0;
//}
//bool palindromStr(string str)
//{
//	int leng = str.length();
//	int st = 0, end = leng - 1;
//		for (int i = 0; i < leng/2; i++)
//		{
//			if (str[st++] != str[end--])
//				return false;
//		}
//		return true;
//}