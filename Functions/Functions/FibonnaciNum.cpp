//#include<iostream>
//using namespace std;
//int fibonnaci(int, int, int);
//int main()
//{
//	int num1, num2, nthNum;
//	cout << "Enter first number: ";
//	cin >> num1;
//	cout << "Enter second number: ";
//	cin >> num2;
//	cout << "Enter the desired index:";
//	cin >> nthNum;
//	int nthFibonnaci = fibonnaci(num1, num2, nthNum);
//	cout << "\nFibonnaci at " << nthNum << ": " << nthFibonnaci;
//	return 0;
//}
//int fibonnaci(int firstNum, int secNum, int nthNum)
//{
//	int current,count;
//	if (nthNum == 1)
//		current = firstNum;
//	else if (nthNum == 2)
//		current = secNum;
//	else
//	{
//		count = 3;
//		while (count <= nthNum)
//		{
//			current = firstNum + secNum;
//			firstNum = secNum;
//			secNum = current;
//			count++;
//		}
//	}
//	return current;
//}