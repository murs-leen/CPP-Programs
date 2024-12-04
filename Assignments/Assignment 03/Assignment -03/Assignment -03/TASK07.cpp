//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "1.Code for C " << endl; 
//	cout << "2.Code for E " << endl;
//	cout << "3.Code for F " << endl;
//	cout << "4.Code for H " << endl;
//	cout << "5.Code for I " << endl;
//	cout << "6.Code for L " << endl;
//	cout << "7.Code for O " << endl;
//	cout << "8.Code for T " << endl;
//	cout << "9.Code for U " << endl;
//	cout << "10.Code for V " << endl;
//	cout << "\nEnter your choice:";
//	cin >> num;
//	switch (num)
//	{
//	default:
//		cout << "Invalid input";
//		break;
//	case 1: 
//		//C
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				if (((i == 0 || i == 5) && j > 2) ||
//					((i == 1 || i == 4) && j == 1) ||
//					((i == 2 || i == 3) && j == 0))
//					cout << setw(2) << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//
//	case 2:
//		//E
//		for (int i = 1; i <= 5; i++) 
//		{
//			for (int j = 1; j <= 4; j++) 
//			{
//				if (j == 1 || i == 1 || i == 3 || i == 5)
//					cout << setw(2) << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//
//	case 3:
//		//F
//		for (int i = 1; i <= 5; i++)
//		{
//			for (int j = 1; j <= 4; j++)
//			{
//				if (j == 1 || i == 1 || i == 3)
//					cout << setw(2) << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//
//	case 4:
//		//H
//		for (int i = 1; i <= 5; i++)
//		{
//			for (int j = 1; j <= 5; j++)
//			{
//				if ( j == 1 || j == 5 || i == 3)
//					cout << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//	case 5:
//		//I
//		for (int i = 1; i <= 7; i++) 
//		{
//			for (int j = 1; j <= 7; j++) 
//			{
//				if (j == 4 || i == 1 || i == 7)
//					cout << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//
//	case 6:
//		//L
//		for (int i = 1; i <= 6; i++)
//		{
//			for (int j = 1; j <= 5; j++)
//			{
//				if (j == 1 || i == 6)
//					cout << setw(2) << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//	case 7:
//		//O
//		for (int i = 1; i <= 4; i++)
//		{
//			for (int j = 1; j <= 5; j++)
//			{
//				if((i == 1 || i == 4) && (j == 2 || j == 4) ||
//					(i == 2 || i == 3) && (j == 1 || j == 5))
//					cout << " +";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//	case 8:
//		//T
//		for (int i = 1; i <= 6; i++)
//		{
//			for (int j = 1; j <= 8; j++)
//			{
//				if (i == 1 || j == 4)
//					cout << "+";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//	case 9:
//		//U
//		for (int i = 1; i <= 6; i++)
//		{
//			for (int j = 1; j <= 7; j++)
//			{
//				if((j == 1 || j == 6) && i < 5 ||
//					i == 5 && (j > 1 && j < 5))
//					cout << setw(2) <<  "*";
//				else
//					cout << " ";
//			}
//			cout << endl;
//		}
//		break;
//	case 10:
//		for (int i = 1; i <= 6; ++i)
//		{
//			for (int j = 1; j <= 11; ++j)
//			{
//				if (j == i || j == 12 - i)
//					cout << "+";
//				else
//					cout << " ";
//			}
//			cout<< endl;
//		}
//
//	}
//	return 0;
//}