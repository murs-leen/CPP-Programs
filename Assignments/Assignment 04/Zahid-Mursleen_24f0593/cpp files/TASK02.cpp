//#include<iostream>
//using namespace std;
//
//void caesarCipher(string , int);
//int main()
//{
//	string str;
//	int val;
//	cout << "Enter string:";
//	cin >> str;
//	cout << "Enter shift value: ";
//	cin >> val;
//	if (cin.fail())
//	{
//		cout << "Shift value must be an integer";
//		return 1;
//	}
//	caesarCipher(str, val);
//	return 0;
//}
//void caesarCipher(string str, int shiftVal)
//{
//	int leng = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//		leng++;
//	for (int i = 0; i < leng; i++)
//	{
//		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
//		{
//			str[i] += shiftVal;
//		}
//	}
//	cout << endl;
//	cout << "Encrypted string: ";
//	for (int i = 0; i < str.length(); i++)
//		cout << str[i];
//}
