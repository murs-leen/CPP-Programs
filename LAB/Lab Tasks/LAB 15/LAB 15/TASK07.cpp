//#include<iostream>
//using namespace std;
//
//const double USD = 1.0;
//const double EUR = 1.06;
//const double GBP = 1.27;
//
//void convertCurrency(int, string);
//int main()
//{
//	int amount;
//	string exhCurrency;
//	cout << "In which currency you want to enter your amount:";
//	cin >> exhCurrency;
//	cout << "Enter your amount:" << endl;
//	cin >> amount;	
//	convertCurrency(amount, exhCurrency);
//}
//void convertCurrency(int amount, string currencyType)
//{
//	int convertedCurrency;
//	if (currencyType == "GBP")
//	{
//		convertedCurrency = amount * GBP;
//		cout << "In GBP : " << convertedCurrency;
//	}
//	else if (currencyType == "EUR")
//	{
//		convertedCurrency = amount * EUR;
//		cout << "In EUr : " << convertedCurrency;
//	}
//	else if (currencyType == "USD")
//	{
//		convertedCurrency = amount * USD;
//		cout << "In USD : " << convertedCurrency;
//	}
//
//}