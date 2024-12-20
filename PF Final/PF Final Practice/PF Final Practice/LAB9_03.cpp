//#include<iostream>
//using namespace std;
//
//bool checkNum(int);
//int main()
//{
//	int num;
//	cout << "Enter a number :";
//	cin >> num;
//	if (num == 2)
//		cout << "Number is prime";
//	else
//	{
//		bool flag = checkNum(num);
//		string strNum = (flag == true) ? "Prime" : "Composite";
//		cout << "Number is " << strNum;
//	}
//}
//bool checkNum(int num)
//{
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}