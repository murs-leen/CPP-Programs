//#include<iostream>
//using namespace std;
//
//void prime(int,int);
//int main()
//{
//	int num1,num2;
//	cout << "Enter two number : ";
//	cin >> num1 >> num2;
//	prime(num1, num2);
//}
//void prime(int num1, int num2)
//{
//	bool isPrime = true;
//	cout << "Prime numbers between " << num1 << " and " << num2 <<": ";
//	for (int i = num1; i <= num2; ++i)
//	{
//		for (int j = 2; j < i; ++j)
//		{
//			if (i % j == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		}
//		if (isPrime && (i != 0 && i != 1))
//			cout << i << " ";
//		isPrime = true;
//	}
//}