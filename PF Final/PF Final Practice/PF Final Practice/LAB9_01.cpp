//#include<iostream>
//using namespace std;
//
//void guessNum(int,int);
//int main()
//{
//	int guessNo = 0, secretNum = 0;
//	guessNum(guessNo,secretNum);
//}
//void guessNum(int num,int secretNum)
//{
//	int count = 0;
//	cout << "Enter a secret number : ";
//	cin >> secretNum;
//	do
//	{
//		cout << "\nGuess the secret number : ";
//		cin >> num;
//		count++;
//		if (secretNum > num)
//			cout << "Your number is smaller than secret number";
//		else if(secretNum < num)
//			cout << "Your number is bigger than secret number";
//	} while (num != secretNum);
//	cout << "You entered the correct number." << endl;
//	cout << "It took you " << count << " Times to guess the number. ";
//}