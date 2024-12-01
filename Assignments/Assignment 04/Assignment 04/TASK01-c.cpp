//#include<iostream>
//using namespace std;
//void precendingAlpha(char &, char &, char &);
//int main()
//{
//	char ch1, ch2, ch3;
//	cout << "Enter three character:";
//	cin >> ch1 >> ch2 >> ch3;
//	if (!((ch1 >= 'A' && ch1 <= 'Z') || (ch1 >= 'a' && ch1 <= 'z') ))
//	{
//		cout << "Enter valid alphabatic character..";
//		return 1;
//	}
//	if (!((ch2 >= 'A' && ch2 <= 'Z') || (ch2 >= 'a' && ch2 <= 'z')))
//	{
//		cout << "Enter valid alphabatic character..";
//		return 1;
//	}
//	if (!((ch3 >= 'A' && ch3 <= 'Z') || (ch3 >= 'a' && ch3 <= 'z')))
//	{
//		cout << "Enter valid alphabatic character..";
//		return 1;
//	}
//	precendingAlpha(ch1, ch2, ch3);
//	cout << ch1 << " " << ch2 << " " << ch3;
//	return 0;
//}
//void precendingAlpha(char &ch1, char& ch2, char& ch3)
//{
//	ch1 = (ch1 == 'z' || ch1 == 'Z') ? 'a' : ch1 + 1;
//	ch2 = (ch2 == 'z' || ch2 == 'Z') ? 'a' : ch2 + 1;
//	ch3 = (ch3 == 'z' || ch3 == 'Z') ? 'a' : ch3 + 1;
//}
