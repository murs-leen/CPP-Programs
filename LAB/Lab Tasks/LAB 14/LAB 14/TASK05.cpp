#include<iostream>
using namespace std;

bool findpalindrome(int num);
int main()
{
	int num;
	cout << "Enter a number:";
	cin >> num;
	bool isPalindrom = findpalindrome(num);
	if (!isPalindrom)
		cout << "Number is not a Palindrome.";
	else
	{
		cout << "Number is Palindrome.";
	}
	return 0;
}
bool findpalindrome(int num)
{
	int originalNum = num;
	int remainder, reverNum = 0;

	while (num != 0)
	{
		remainder = num % 10;
		reverNum = reverNum * 10 + remainder;
		num /= 10;
	}
	if (reverNum == originalNum)
		return true;
	else
	{
		return false;
	}
}