////You have to find the no of dice rolled to find the 
//// sum which user specifies
//#include<iostream>
//using namespace std;
//
//int rollDice(int);
//int main()
//{
//	cout << "The number of times a dice rolled to get 10:" << rollDice(10) << endl;
//	cout << "The number of times a dice rolled to get 6:" << rollDice(6) << endl;
//	return 0;
//}
//int rollDice(int num)
//{
//	int diceCount = 0, sum = 0;
//	srand(time(0));
//	do
//	{
//	int dice1 = rand() % 6 + 1;
//	int dice2 = rand() % 6 + 1;
//	sum = dice1 + dice2;
//	diceCount++;
//	} while (sum != num);
//
//	return diceCount;
//}