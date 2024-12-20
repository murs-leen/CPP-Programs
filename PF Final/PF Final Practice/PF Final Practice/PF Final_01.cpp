//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	long int num;
//	cout << "Enter the barcode number (8 - digit): ";
//	cin >> num;
//	if (cin.fail() || num < 11111111 || num > 99999999)
//	{
//		cout << "Invalid input";
//		return 0; 
//	}
//	int leftDigit = num / 10000000;
//	int rightTwoDigit = num % 100;
//	num /= 100;
//	num %= 100000;
//	int price = num;
//	string category;
//	if (rightTwoDigit == 10)
//		category = "Refrigerator";
//	else if (rightTwoDigit == 11)
//		category = "Frozen";
//	else if (rightTwoDigit == 12)
//		category = "Others";
//	else
//	{
//		cout << "Incorrect barcode!";
//		return 0; 
//	}
//	if (leftDigit == 1)
//	{
//		cout << "Category :" << category << endl;
//		if (category == "Frozen") {
//			price += 100;
//			cout << "Frozen Cost :PKR 100" << endl;
//			cout << "Total price : " << price;
//		}
//		else
//		{
//		cout << "Base price : " << price << endl;
//		cout << "Total price : " << price;
//		}
//	}
//	else if (leftDigit == 2)
//	{
//		cout << "Category : " << category << endl;
//		cout << "Base price :" << price << endl;
//		float tax = (float)price * (42.0 / 100);
//		if (category == "Frozen")
//		{
//			cout << "Frozen Cost :PKR 100" << endl;
//			price = price + tax + 100;
//			cout << "Final price : " << price << endl;
//		}
//		else
//		{
//			price = price + tax;
//			cout << "Final price :" << price;
//		}
//	}
//	else
//		cout << "Incorrect barcode!" << endl;
//}