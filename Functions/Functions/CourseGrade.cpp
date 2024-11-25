//#include<iostream>
//using namespace std;
//
//char courseGrade(int);
//int main()
//{
//	int num;
//	cout << "Enter your test score: ";
//	cin >> num;
//	char ch = courseGrade(num);
//	if (ch == '1')
//		cout << "Invalid input";
//	else
//		cout << "Your Grade : " << ch;
//	return 0;
//}
//char courseGrade(int num)
//{
//	switch (num / 10)
//	{
//	case 0:
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		return 'F';
//	case 6:
//		return 'D';
//	case 7:
//		return 'C';
//	case 8:
//		return 'B';
//	case 9:
//	case 10:
//		return 'A';
//	default:
//		return '1';
//	}
//}