//#include<iostream>
//using namespace std;
//
//bool isMultiple(int, int);
//int main()
//{
//	int num1, num2, count = 0;
//	do
//	{
//		cout << "Enter 1st number:";
//		cin >> num1;
//		cout << "Enter 2nd number:";
//		cin >> num2;
//		if (cin.fail() || num1 == 0 || num2 == 0)
//		{
//			cout << "Cannot configure..";
//			return 1;
//		}
//		if (isMultiple(num1, num2))
//			cout << num2 << " is multiple of " << num1 << endl;
//		else
//			cout << num2 << " is not multiple of " << num1 << endl;
//		cout << endl;
//		count++;
//	} while (count < 5);
//	return 0;
//}
//bool isMultiple(int first, int second)
//{
//	return second % first == 0;
//}