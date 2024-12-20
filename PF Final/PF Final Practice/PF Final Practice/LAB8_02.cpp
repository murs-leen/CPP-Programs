///*	counter control loop
//	sentinal control loop
//	flag control loop*/
//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//void  printTable();
//void avg();
//void palindrome();
//
//int main()
//{
//	//printTable();
//	//_getch();
//	avg();
//	_getch();
//	palindrome();
//}
//void printTable()
//{
//	int num = 5;
//	int i = 1;
//	while (i <= 10) // counter control loop
//	{
//		cout << num << " X " << i << " = " << num * i << endl;
//		i++;
//	}
//}
//void avg()
//{
//	int num, sum = 0, i = 0;
//	float avg;
//	cout << "Enter your exam score : ";
//	cin >> num;
//	while (num != -1) // sentinal control loop
//	{
//		sum += num;
//		i++;
//		cout << "Enter your exam score : ";
//		cin >> num;
//	}
//	 avg = (float) sum / i;
//	cout << "Avg = " << avg;
//}
//void palindrome()
//{
//	bool flag = true;
//	int num, count = 0, reverseNum = 0;
//	cout << "Enter a number : ";
//	cin >> num;
//	int originalNum = num;
//	while (num != 0)
//	{
//		int remainder = num % 10;
//		 reverseNum = reverseNum * 10 + remainder;
//		 num /= 10;
//	}
//	if (originalNum != reverseNum)
//		flag = false;
//	if (flag)
//		cout << "Number is palindrom";
//	else
//		cout << "Number is not palindrom";
//}