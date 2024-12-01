//#include<iostream>
//using namespace std;
//
//int trackAttempts();
//int main()
//{
//	char input;
//	int totalAttempts = 0;
//	bool flag = true;
//	cout << "Do you want to attempt question:";
//	while (flag)
//	{
//		cin >> input;
//		if (input == 'y' || input == 'Y')
//		{
//			totalAttempts = trackAttempts();
//			cout << "Do you want to attempt question:";
//		}
//		else if (input == 'n' || input == 'N')
//			flag = false;
//	}
//	cout << "Total Attempts:" << totalAttempts;
//	return 0;
//}
//int trackAttempts()
//{
//	static int count = 0;
//	count++;
//	return count;
//}