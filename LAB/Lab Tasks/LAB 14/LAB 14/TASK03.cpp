#include<iostream>
using namespace std;
int rollDice(int num);
int main()
{
	int num;
	cout << "Enter  a number:";
	cin >> num;
	int sum = rollDice(num);
	cout << "\nSum = " << sum;
	return 0;
}
int rollDice(int num)
{
	int randNum,sum = 0;
	cout << "Random numbers are:" << endl; 
	for (int i = 0; i < num; i++)
	{
		randNum = (rand() % 5 ) + 15;
		sum += randNum;
		cout << randNum << " ";
	}
	return sum;
}