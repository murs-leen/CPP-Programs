//#include<iostream>
//using namespace std;
//
//int reverseNum(int);
//int main()
//{
//	int num;
//	cout << "Enter a number:";
//	cin >> num;
//	if (cin.fail() || num < 0)
//	{
//		cout << "Enter a valid integer number." << endl;
//		return 1;
//	}
//	int reversedNum = reverseNum(num);
//	cout << "Reversed number: " << reversedNum;
//	return 0;
//}
//int reverseNum(int num)
//{
//	int reversedNum = 0;
//	while (num != 0)
//	{
//		int remainder = num % 10;
//		reversedNum = reversedNum * 10 + remainder;
//		num /= 10;
//	}
//	return reversedNum;
//}